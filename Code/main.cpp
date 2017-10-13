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
		cout << "*********XXX航空售票系统感谢您的使用！**********" << endl;
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
	cout << "************欢迎使用XXX航空售票系统*************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************1.航班查询服务****************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************2.订票服务********************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************3.退票服务********************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************4.购票信息查询****************" << endl;
	cout << "*                                              *" << endl;
	cout << "******************5.退出系统********************" << endl;
	cout << "*                                              *" << endl;
	cout << "************************************************" << endl;
	cout << "*~~~~~~~~~~~请输入1~5选择您需要的服务~~~~~~~~~~*" << endl;
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
		cout << "输入错误..." << endl;
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
		cout << "打开string.dat文件失败..." << endl;
		exit(1);
	}
	cout << "请输入出发地 （仅支持太原）: ";
	cin >> d;
	cout << "请输入目的地（仅支持各地省会） : ";
	cin >> e;
	cout << "请输入出发日期（格式为2017 6 6，仅支持6月1号~6月30号） : ";
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
		cout << "************************欢迎使用XXX航空售票系统*************************" << endl;
		cout << "********航班号 出发地 目的地 出发时间 到达时间 总票数 剩余票数 价钱*****" << endl;
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
		cout << "没有找到您要查询的航班..." << endl;
	fclose(fp);
	cout << "按任意键返回..." << endl;
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

		cout << "请输入您的姓名：";
		cin >> name;
		strcpy(infoNew.name, name);
		cout << "请输入您的要订航班号：";
		cin >> date;
		strcpy(infoNew.date, date);
		cout << "请输入您的出发日期 : ";
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
			cout << "您所选的航班号所对应的路线：" << plane[i].place.startplace << "->" << plane[i].place.arriveplace << endl;
			cout << "请选择您需要的机舱（0.头等舱 1.商务舱 2.经济舱）：" << endl;
			cin >> f;
			infoNew.zuocang = f;
			switch (f)
			{
			case 0:
				cout << "您选择了头等舱，价钱为" << plane[i].price[0] << "元" << endl;
				infoNew.price = plane[i].price[0];
				break;
			case 1:
				cout << "您选择了商务舱，价钱为" << plane[i].price[1] << "元" << endl;
				infoNew.price = plane[i].price[0];
				break;
			case 2:
				cout << "您选择了经济舱，价钱为" << plane[i].price[2] << "元" << endl;
				infoNew.price = plane[i].price[0];

			}
			getchar();
			cout << "请确认您的选择(Y/N)" << endl;
		
			t = getchar();
			if (t == 'Y'|| t == 'y')
			{
				plane[i].seat.part[f] = plane[i].seat.part[f] - 1;
				fseek(fp, -sizeof(class Airplane), SEEK_CUR);
				fwrite(&plane[i], sizeof(class Airplane), 1, fp);

				if ((p = fopen("info.dat", "ab")) == NULL)											//
					cout << "打开文件info.dat失败..." << endl;
				fwrite(&infoNew, sizeof(class Info), 1, p);
				cout << "订票成功..." << endl;
				fclose(fp);
				fclose(p);

			}

			else
			{
				cout << "您取消了订票，按任意键返回..." << endl;
				fclose(fp);
				fclose(p);
			}
		}

		else
			cout << "没有找到航班信息，请您确认输入信息是否正确..." << endl;
		getchar();
		
		cout << "是否继续订票？(Y/N)" << endl;
		
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

	cout << "请输入您的姓名：";
	cin >> name;
	cout << "**************航班号 出发地 目的地 出发时间 到达时间 机舱  价格***************" << endl;
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
				strcpy(cang, "头等舱");
				break;
			case 1:
				strcpy(cang, "商务舱");
				break;
			case 2:
				strcpy(cang, "经济舱");
			}
			temp = false;
			cout << info[i].year << "年" << info[i].month << "月" << info[i].day << "日" << "  " << info[i].date << "  " << info[i].start << "   " << info[i].arrival << "    " << info[i].time.starthour << ":" << info[i].time.startminute << "     " << info[i].time.arrivehour << ":" << info[i].time.arriveminute << "  " << cang << " " << info[i].price << endl;
			cout << "******************************************************************************" << endl;
		}
	}
	if (temp)
	{
		cout << "没有查询到订票信息..." << endl;
		cout << "按任意键返回..." << endl;
		getchar();
		getchar();
		system("cls");
		menu();
		return ;
	}
	cout << "请输入您要退的航班号：";
	cin >> date;
	cout << "请输入您要退的日期 : ";
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
			if ((strcmp(info[j].name, name) == 0) && (info[j].year == a) && (info[j].month == b) && (info[j].day == c))//&& strcmp(info[j].date, date) 航班号参与比较后不能退票成功
				find = true;
		if (!find)
		{
			cout << "没有查询到订票信息..." << endl;
			cout << "按任意键返回..." << endl;
			getchar();
			getchar();
			system("cls");
			menu();
			return;
		}


		cout << "您所退的航班号所对应的路线：" << plane[i].place.startplace << "->" << plane[i].place.arriveplace << endl;
	
		cout << "请选择您需要的机舱（0.头等舱 1.商务舱 2.经济舱）：" << endl;
		cin >> f;
		switch (f)
		{
			case 0:cout << "您选择的头等舱，价钱为" << plane[i].price[0] << "元" << endl; break;
			case 1:cout << "您选择的商务舱，价钱为" << plane[i].price[1] << "元" << endl; break;
			case 2:cout << "您选择的经济舱，价钱为" << plane[i].price[2] << "元" << endl; break;
		}
		
		getchar();
		cout << "请确认您的选择(Y/N)" << endl;
		t = getchar();
		if (t == 'Y' || t == 'y')
		{

			plane[i].seat.part[f] = plane[i].seat.part[f] + 1;
			fseek(fp, -sizeof(class Airplane), SEEK_CUR);
			fwrite(&plane[i], sizeof(class Airplane), 1, fp);
	
		
			for (j = 0; j < infoNum; j++)													//////
				if ((strcmp(info[j].name, name) == 0) && (info[j].year == a) && (info[j].month == b) && (info[j].day == c))//&& strcmp(info[j].date, date) 航班号参与比较后不能退票成功
					break;

			if (j != infoNum)
				for (j; j <= infoNum - 1; j++)
					info[j] = info[j + 1];
			p = fopen("info.dat", "wb");
			for (j = 0; j < infoNum; j++)
				fwrite(&info[j], sizeof(class Info), 1, p);

			cout << "退票成功，按任意键返回..." << endl;
		}										//////
		else
			cout << "您取消了退票，按任意键返回..." << endl;
	}
	
	else
		cout << "没有查询到航班信息，请您确认输入信息是否正确..." << endl;

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

	cout << "请输入您的姓名：";
	cin >> name;
	cout << "您的订票信息为：" << endl;
	cout << "***************************欢迎使用XXX航空售票系统****************************" << endl;
	cout << "**************航班号 出发地 目的地 出发时间 到达时间 机舱  价格***************" << endl;
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
				strcpy(cang, "头等舱");
				break;
			case 1:
				strcpy(cang, "商务舱");
				break;
			case 2:
				strcpy(cang, "经济舱");
			}
			temp = false;
			cout <<info[i].year<<"年"<<info[i].month << "月" << info[i].day << "日" << "  " << info[i].date << "  " << info[i].start << "   " << info[i].arrival << "    " << info[i].time.starthour << ":" << info[i].time.startminute <<"     "<< info[i].time.arrivehour << ":" << info[i].time.arriveminute <<"  "<< cang << " " << info[i].price << endl;
			cout << "******************************************************************************" << endl;
		}
	}
	if (temp)
		cout << "没有查询到订票信息..." << endl;
	cout << "按任意键返回..." << endl;
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
