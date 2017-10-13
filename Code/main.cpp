#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Place 
{
public:
	char startplace[20];
	char arriveplace[20];
};

class Time 
{
public:
	int starthour, startminute, arrivehour, arriveminute;
};

class Seat
{
public:
	int whole[3];
	int part[3];
};

class Airplane
{
public:
	char numb[20];
	Place place;
	Time time;
	Seat seat;
	int year, month, day;
	char quality[3][20];
	int price[3];
}plane[20 * 31];

class Info																						//
{
public:
	char name[20];
	char start[20];
	char arrival[20];
	char date[20];
	int year, month, day;
	int zuocang, price;
	Time time;
}info[100];
int infoNum = 0;

class System 
{
private:

public:
	System()
	{	
	}
	~System()
	{	
	}
	void bookticket();
	void returnticket();
	void menu();
	void list();
	void information();
	void quit()
	{
		system("CLS");
		cout << "************************************************" << endl;
		cout << "*       *********************************      *" << endl;
		cout << "*              ****************                *" << endl;
		cout << "*                  ********                    *" << endl;
		cout << "*                    ****                      *" << endl;
		cout << "*                     **                       *" << endl;
		cout << "*********XXX������Ʊϵͳ��л����ʹ�ã�**********" << endl;
		cout << "*                     **                       *" << endl;
		cout << "*                    ****                      *" << endl;
		cout << "*                  ********                    *" << endl;
		cout << "*              ****************                *" << endl;
		cout << "*       *********************************      *" << endl;
		cout << "************************************************" << endl;
	}

};
void System::menu()
{
	int i;
	cout << "************��ӭʹ��XXX������Ʊϵͳ*************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************1.�����ѯ����****************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************2.��Ʊ����********************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************3.��Ʊ����********************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************4.��Ʊ��Ϣ��ѯ****************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************5.�˳�ϵͳ********************" << endl;
	cout << "*                                              *" << endl;
	cout << "************************************************" << endl;
	cout << "*~~~~~~~~~~~������1~5ѡ������Ҫ�ķ���~~~~~~~~~~*" << endl;
	cout << "************************************************" << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		list(); break;
	case 2:
		bookticket(); break;
	case 3:
		returnticket(); break;
	case 4:
		information(); break;
	case 5:
		quit(); break;
	default:
		cout << "�������..." << endl;
	}
	getchar();
}

void System::list()
{
	system("CLS");
	char d[20], e[20];
	int i, a, b, c;
	bool find=false;
	FILE * fp;
	if ((fp = fopen("string.dat", "rb+")) == NULL)
	{	
		cout << "��string.dat�ļ�ʧ��..." << endl;
		exit(1);
	}
	cout << "����������� ����֧��̫ԭ��: ";
	cin >> d;
	cout << "������Ŀ�ĵأ���֧�ָ���ʡ�ᣩ : ";
	cin >> e;
	cout << "������������ڣ���ʽΪ2017 6 6����֧��6��1��~6��30�ţ� : ";
	scanf("%d%d%d", &a, &b, &c);
	system("CLS");
	for (i = 0; i < 20 * 31; i++)
	{
		fread(&plane[i], sizeof(class Airplane), 1, fp);
		if ((strcmp(d, plane[i].place.startplace) == 0) && (strcmp(e, plane[i].place.arriveplace) == 0) && (a == plane[i].year) && (b == plane[i].month) && (c == plane[i].day))
		{
			find=true;		
			break;
		}
	}

	if(find)
	{
		cout << "************************��ӭʹ��XXX������Ʊϵͳ*************************" << endl;
		cout << "********����� ������ Ŀ�ĵ� ����ʱ�� ����ʱ�� ��Ʊ�� ʣ��Ʊ�� ��Ǯ*****" << endl;
		cout << "************************************************************************" << endl;
		cout << plane[i].quality[0] << " " << plane[i].numb << " " << plane[i].place.startplace << "   " << plane[i].place.arriveplace << "   " << plane[i].time.starthour << ":" << plane[i].time.startminute << "     " << plane[i].time.arrivehour << ":" << plane[i].time.arriveminute << "     " << plane[i].seat.whole[0] << "      " << plane[i].seat.part[0] << "      " << plane[i].price[0] << endl;
		cout << "************************************************************************" << endl;
		cout << plane[i].quality[1] << " " << plane[i].numb << " " << plane[i].place.startplace << "   " << plane[i].place.arriveplace << "   " << plane[i].time.starthour << ":" << plane[i].time.startminute << "     " << plane[i].time.arrivehour << ":" << plane[i].time.arriveminute << "     " << plane[i].seat.whole[1] << "      " << plane[i].seat.part[1] << "      " << plane[i].price[1] << endl;
		cout << "************************************************************************" << endl;
		cout << plane[i].quality[2] << " " << plane[i].numb << " " << plane[i].place.startplace << "   " << plane[i].place.arriveplace << "   " << plane[i].time.starthour << ":" << plane[i].time.startminute << "     " << plane[i].time.arrivehour << ":" << plane[i].time.arriveminute << "     " << plane[i].seat.whole[2] << "      " << plane[i].seat.part[2] << "      " << plane[i].price[2] << endl;
		cout << "************************************************************************" << endl;
		cout << "************************************************************************" << endl;
	}

	else
		cout << "û���ҵ���Ҫ��ѯ�ĺ���..." << endl;
	fclose(fp);
	cout << "�����������..." << endl;
	getchar();
	getchar();
	system("CLS");
	menu();
}
void System::bookticket()
{
	system("CLS");
	char name[20], date[20],t;
	bool aa = true, find=false;
	int a, b, c, i, f, j = 0;
	Info infoNew;
	FILE * fp,*p;																			//
	
	while (aa)
	{
		if ((fp = fopen("string.dat", "rb+")) == NULL)
			exit(1);

		if ((p = fopen("info.dat", "rb+")) == NULL)											//
			p = fopen("info.dat", "wb");
		infoNum = 0;
		while (!feof(p))
		{
			fread(&info[infoNum], sizeof(class Info), 1, p);
			infoNum++;
		}
		infoNum--;

		fclose(p);

		cout << "����������������";
		cin >> name;
		strcpy(infoNew.name, name);
		cout << "����������Ҫ������ţ�";
		cin >> date;
		strcpy(infoNew.date, date);
		cout << "���������ĳ������� : ";
		scanf("%d%d%d", &a, &b, &c);
		infoNew.year = a;
		infoNew.month = b;
		infoNew.day = c;
		for (i = 0; i < 20 * 31; i++)
		{
			fread(&plane[i], sizeof(class Airplane), 1, fp);
			if ((strcmp(date, plane[i].numb) == 0) && (a == plane[i].year) && (b == plane[i].month) && (c == plane[i].day))
			{
				strcpy(infoNew.start, plane[i].place.startplace);
				strcpy(infoNew.arrival, plane[i].place.arriveplace);
				infoNew.time.starthour = plane[i].time.starthour;
				infoNew.time.startminute = plane[i].time.startminute;
				infoNew.time.arrivehour = plane[i].time.arrivehour;
				infoNew.time.arriveminute = plane[i].time.arriveminute;
				find=true;
				break;
			}
		}
		if(find)
		{
			cout << "����ѡ�ĺ��������Ӧ��·�ߣ�" << plane[i].place.startplace << "->" << plane[i].place.arriveplace << endl;
			cout << "��ѡ������Ҫ�Ļ��գ�0.ͷ�Ȳ� 1.����� 2.���òգ���" << endl;
			cin >> f;
			infoNew.zuocang = f;
			switch (f)
			{
			case 0:
				cout << "��ѡ����ͷ�Ȳգ���ǮΪ" << plane[i].price[0] << "Ԫ" << endl;
				infoNew.price = plane[i].price[0];
				break;
			case 1:
				cout << "��ѡ��������գ���ǮΪ" << plane[i].price[1] << "Ԫ" << endl;
				infoNew.price = plane[i].price[0];
				break;
			case 2:
				cout << "��ѡ���˾��òգ���ǮΪ" << plane[i].price[2] << "Ԫ" << endl;
				infoNew.price = plane[i].price[0];

			}
			getchar();
			cout << "��ȷ������ѡ��(Y/N)" << endl;
		
			t = getchar();
			if (t == 'Y'|| t == 'y')
			{
				plane[i].seat.part[f] = plane[i].seat.part[f] - 1;
				fseek(fp, -sizeof(class Airplane), SEEK_CUR);
				fwrite(&plane[i], sizeof(class Airplane), 1, fp);

				if ((p = fopen("info.dat", "ab")) == NULL)											//
					cout << "���ļ�info.datʧ��..." << endl;
				fwrite(&infoNew, sizeof(class Info), 1, p);
				cout << "��Ʊ�ɹ�..." << endl;
				fclose(fp);
				fclose(p);

			}

			else
			{
				cout << "��ȡ���˶�Ʊ�������������..." << endl;
				fclose(fp);
				fclose(p);
			}
		}

		else
			cout << "û���ҵ�������Ϣ������ȷ��������Ϣ�Ƿ���ȷ..." << endl;
		getchar();
		
		cout << "�Ƿ������Ʊ��(Y/N)" << endl;
		
		if (getchar() != 'Y')
			aa = false;
		
	}
	getchar();
	
	system("CLS");
	menu();
}
void System::returnticket()
{
	system("CLS");
	char name[20], date[20],t;
	int a, b, c, i, j=0, f;
	bool temp = true, find = false, find1=false;
	FILE * fp,*p;
	if ((fp = fopen("string.dat", "rb+")) == NULL)
		exit(1);

	cout << "����������������";
	cin >> name;
	cout << "**************����� ������ Ŀ�ĵ� ����ʱ�� ����ʱ�� ����  �۸�***************" << endl;
	cout << "******************************************************************************" << endl;

	p = fopen("info.dat", "rb+");
	for (i = 0; i <= infoNum; i++)													//////
	{
		fread(&info[i], sizeof(class Info), 1, p);
		if (strcmp(info[i].name, name) == 0)
		{
			char cang[20];
			switch (info[i].zuocang)
			{
			case 0:
				strcpy(cang, "ͷ�Ȳ�");
				break;
			case 1:
				strcpy(cang, "�����");
				break;
			case 2:
				strcpy(cang, "���ò�");
			}
			temp = false;
			cout << info[i].year << "��" << info[i].month << "��" << info[i].day << "��" << "  " << info[i].date << "  " << info[i].start << "   " << info[i].arrival << "    " << info[i].time.starthour << ":" << info[i].time.startminute << "     " << info[i].time.arrivehour << ":" << info[i].time.arriveminute << "  " << cang << " " << info[i].price << endl;
			cout << "******************************************************************************" << endl;
		}
	}
	if (temp)
	{
		cout << "û�в�ѯ����Ʊ��Ϣ..." << endl;
		cout << "�����������..." << endl;
		getchar();
		getchar();
		system("cls");
		menu();
		return ;
	}
	cout << "��������Ҫ�˵ĺ���ţ�";
	cin >> date;
	cout << "��������Ҫ�˵����� : ";
	scanf("%d%d%d", &a, &b, &c);
	for (i = 0; i<20 * 31; i++)
	{
		fread(&plane[i], sizeof(class Airplane), 1, fp);
		if ((strcmp(date, plane[i].numb) == 0) && (a == plane[i].year) && (b == plane[i].month) && (c == plane[i].day))
		{
			find1=true;
			break;
		}
	}
	fclose(p);
	
	if(find1)
	{	
	
		p = fopen("info.dat", "rb+");
		infoNum = 0;
		while (!feof(p))
		{
			fread(&info[infoNum], sizeof(class Info), 1, p);
			infoNum++;
		}
		infoNum--;
		fclose(p);

		for (j = 0; j < infoNum; j++)													//////
			if ((strcmp(info[j].name, name) == 0) && (info[j].year == a) && (info[j].month == b) && (info[j].day == c))//&& strcmp(info[j].date, date) ����Ų���ȽϺ�����Ʊ�ɹ�
				find = true;
		if (!find)
		{
			cout << "û�в�ѯ����Ʊ��Ϣ..." << endl;
			cout << "�����������..." << endl;
			getchar();
			getchar();
			system("cls");
			menu();
			return;
		}


		cout << "�����˵ĺ��������Ӧ��·�ߣ�" << plane[i].place.startplace << "->" << plane[i].place.arriveplace << endl;
	
		cout << "��ѡ������Ҫ�Ļ��գ�0.ͷ�Ȳ� 1.����� 2.���òգ���" << endl;
		cin >> f;
		switch (f)
		{
			case 0:cout << "��ѡ���ͷ�Ȳգ���ǮΪ" << plane[i].price[0] << "Ԫ" << endl; break;
			case 1:cout << "��ѡ�������գ���ǮΪ" << plane[i].price[1] << "Ԫ" << endl; break;
			case 2:cout << "��ѡ��ľ��òգ���ǮΪ" << plane[i].price[2] << "Ԫ" << endl; break;
		}
		
		getchar();
		cout << "��ȷ������ѡ��(Y/N)" << endl;
		t = getchar();
		if (t == 'Y' || t == 'y')
		{

			plane[i].seat.part[f] = plane[i].seat.part[f] + 1;
			fseek(fp, -sizeof(class Airplane), SEEK_CUR);
			fwrite(&plane[i], sizeof(class Airplane), 1, fp);
	
		
			for (j = 0; j < infoNum; j++)													//////
				if ((strcmp(info[j].name, name) == 0) && (info[j].year == a) && (info[j].month == b) && (info[j].day == c))//&& strcmp(info[j].date, date) ����Ų���ȽϺ�����Ʊ�ɹ�
					break;

			if (j != infoNum)
				for (j; j <= infoNum - 1; j++)
					info[j] = info[j + 1];
			p = fopen("info.dat", "wb");
			for (j = 0; j < infoNum; j++)
				fwrite(&info[j], sizeof(class Info), 1, p);

			cout << "��Ʊ�ɹ��������������..." << endl;
		}										//////
		else
			cout << "��ȡ������Ʊ�������������..." << endl;
	}
	
	else
		cout << "û�в�ѯ��������Ϣ������ȷ��������Ϣ�Ƿ���ȷ..." << endl;

	fclose(fp);
	fclose(p);
	getchar();
	getchar();
	system("CLS");
	menu();

}

void System::information()
{
	system("CLS");
	int i, a, b, c;
	char name[20], date[20];
	bool temp = true;
	FILE *p;

	infoNum = 0;
	p = fopen("info.dat", "rb+");
	while (!feof(p))
	{
		fread(&info[infoNum], sizeof(class Info), 1, p);
		infoNum++;
	}
	infoNum--;
	fclose(p);

	cout << "����������������";
	cin >> name;
	cout << "���Ķ�Ʊ��ϢΪ��" << endl;
	cout << "***************************��ӭʹ��XXX������Ʊϵͳ****************************" << endl;
	cout << "**************����� ������ Ŀ�ĵ� ����ʱ�� ����ʱ�� ����  �۸�***************" << endl;
	cout << "******************************************************************************" << endl;
	
	p = fopen("info.dat", "rb+");
	for (i = 0; i <= infoNum; i++)													//////
	{
		fread(&info[i], sizeof(class Info), 1, p);
		if (strcmp(info[i].name, name) == 0)
		{
			char cang[20];
			switch (info[i].zuocang)
			{
			case 0:
				strcpy(cang, "ͷ�Ȳ�");
				break;
			case 1:
				strcpy(cang, "�����");
				break;
			case 2:
				strcpy(cang, "���ò�");
			}
			temp = false;
			cout <<info[i].year<<"��"<<info[i].month << "��" << info[i].day << "��" << "  " << info[i].date << "  " << info[i].start << "   " << info[i].arrival << "    " << info[i].time.starthour << ":" << info[i].time.startminute <<"     "<< info[i].time.arrivehour << ":" << info[i].time.arriveminute <<"  "<< cang << " " << info[i].price << endl;
			cout << "******************************************************************************" << endl;
		}
	}
	if (temp)
		cout << "û�в�ѯ����Ʊ��Ϣ..." << endl;
	cout << "�����������..." << endl;
	getchar();
	getchar();
	
	fclose(p);
	system("CLS");
	menu();
}

int main()
{
	System s;
	s.menu();
	return 0; 
}
