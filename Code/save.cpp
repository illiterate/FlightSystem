#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Place{
public:
	char startplace[20];
	char arriveplace[20];

};


class Time{
public:
	int starthour,startminute,arrivehour,arriveminute;


};


class Seat{
public:

	int whole[3];
	int part[3];

};


struct Airplane
{
	char numb[20];
	Place place;
	Time time;
	Seat seat;
	int year,month,day;
	char quality[3][20];
	int price[3];
	
}plane[31*20];

int main()
{
	FILE * fp;
	int i;
	if((fp=fopen("info.dat","wb"))==NULL)
	cout<<"文件创建失败"; 
	
	for(i=0;i<31;i++)
	{
		strcpy(plane[i].numb,"T10010");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"青岛");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=52;
		plane[i].time.startminute=36;
		plane[i].time.starthour=7;
		plane[i].time.arrivehour=9;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1;
		plane[i].price[0]=800;
		plane[i].price[1]=700;
		plane[i].price[2]=500;

	}
		
	for(i=31;i<62;i++)
	{
		strcpy(plane[i].numb,"T10011");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"上海");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=40;
		plane[i].time.startminute=40;
		plane[i].time.starthour=7;
		plane[i].time.arrivehour=9;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31;
		plane[i].price[0]=800;
		plane[i].price[1]=700;
		plane[i].price[2]=500;

	}
	
	for(i=62;i<93;i++)
	{
		strcpy(plane[i].numb,"T10012");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"贵阳");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=27;
		plane[i].time.startminute=33;
		plane[i].time.starthour=9;
		plane[i].time.arrivehour=12;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-62;
		plane[i].price[0]=650;
		plane[i].price[1]=500;
		plane[i].price[2]=400;

	}
		
	for(i=93;i<31*4;i++)
	{
		strcpy(plane[i].numb,"T10013");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"大连");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=30;
		plane[i].time.startminute=12;
		plane[i].time.starthour=11;
		plane[i].time.arrivehour=14;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-93;
		plane[i].price[0]=700;
		plane[i].price[1]=600;
		plane[i].price[2]=500;

	}
	
	for(i=31*4;i<31*5;i++)
	{
		strcpy(plane[i].numb,"T10014");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"成都");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=32;
		plane[i].time.startminute=18;
		plane[i].time.starthour=10;
		plane[i].time.arrivehour=12;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*4;
		plane[i].price[0]=550;
		plane[i].price[1]=500;
		plane[i].price[2]=450;

	}
	
	for(i=31*5;i<31*6;i++)
	{
		strcpy(plane[i].numb,"T10015");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"长沙");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=10;
		plane[i].time.startminute=35;
		plane[i].time.starthour=5;
		plane[i].time.arrivehour=8;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*5;
		plane[i].price[0]=600;
		plane[i].price[1]=550;
		plane[i].price[2]=450;

	}
		
	for(i=31*6;i<31*7;i++)
	{
		strcpy(plane[i].numb,"T10016");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"南京");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=24;
		plane[i].time.startminute=36;
		plane[i].time.starthour=15;
		plane[i].time.arrivehour=19;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*6;
		plane[i].price[0]=850;
		plane[i].price[1]=760;
		plane[i].price[2]=630;

	}
		
	for(i=31*7;i<31*8;i++)
	{
		strcpy(plane[i].numb,"T10017");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"西安");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=30;
		plane[i].time.startminute=24;
		plane[i].time.starthour=13;
		plane[i].time.arrivehour=15;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*7;
		plane[i].price[0]=750;
		plane[i].price[1]=600;
		plane[i].price[2]=550;

	}
		
	for(i=31*8;i<31*9;i++)
	{
		strcpy(plane[i].numb,"T10018");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"天津");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=10;
		plane[i].time.startminute=55;
		plane[i].time.starthour=13;
		plane[i].time.arrivehour=16;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*8;
		plane[i].price[0]=750;
		plane[i].price[1]=700;
		plane[i].price[2]=650;

	}
			
	for(i=37*9;i<31*10;i++)
	{
		strcpy(plane[i].numb,"T10019");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"重庆");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=50;
		plane[i].time.startminute=36;
		plane[i].time.starthour=16;
		plane[i].time.arrivehour=19;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*9;
		plane[i].price[0]=650;
		plane[i].price[1]=580;
		plane[i].price[2]=520;

	}		
	for(i=310;i<31*11;i++)
	{
		strcpy(plane[i].numb,"T10020");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"香港");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=52;
		plane[i].time.startminute=40;
		plane[i].time.starthour=12;
		plane[i].time.arrivehour=17;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-310;
		plane[i].price[0]=800;
		plane[i].price[1]=700;
		plane[i].price[2]=650;

	}		
	for(i=31*11;i<31*12;i++)
	{
		strcpy(plane[i].numb,"T10021");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"黑龙江");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=44;
		plane[i].time.startminute=32;
		plane[i].time.starthour=13;
		plane[i].time.arrivehour=15;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*11;
		plane[i].price[0]=450;
		plane[i].price[1]=400;
		plane[i].price[2]=350;

	}		
	for(i=31*12;i<31*13;i++)
	{
		strcpy(plane[i].numb,"T10022");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"桂林");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=40;
		plane[i].time.startminute=22;
		plane[i].time.starthour=18;
		plane[i].time.arrivehour=20;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*12;
		plane[i].price[0]=600;
		plane[i].price[1]=550;
		plane[i].price[2]=400;

	}		
	for(i=31*13;i<31*14;i++)
	{
		strcpy(plane[i].numb,"T10023");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"呼和浩特");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=10;
		plane[i].time.startminute=32;
		plane[i].time.starthour=17;
		plane[i].time.arrivehour=21;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*13;
		plane[i].price[0]=750;
		plane[i].price[1]=700;
		plane[i].price[2]=650;

	}		
	for(i=31*14;i<31*15;i++)
	{
		strcpy(plane[i].numb,"T10024");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"吉林");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=46;
		plane[i].time.startminute=36;
		plane[i].time.starthour=14;
		plane[i].time.arrivehour=16;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*14;
		plane[i].price[0]=100;
		plane[i].price[1]=80;
		plane[i].price[2]=50;

	}		
	for(i=31*15;i<31*16;i++)
	{
		strcpy(plane[i].numb,"T10025");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"青海");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=52;
		plane[i].time.startminute=36;
		plane[i].time.starthour=15;
		plane[i].time.arrivehour=19;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*15;
		plane[i].price[0]=650;
		plane[i].price[1]=550;
		plane[i].price[2]=500;

	}		
	for(i=31*16;i<31*17;i++)
	{
		strcpy(plane[i].numb,"T10026");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"郑州");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=45;
		plane[i].time.startminute=55;
		plane[i].time.starthour=8;
		plane[i].time.arrivehour=10;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*16;
		plane[i].price[0]=400;
		plane[i].price[1]=350;
		plane[i].price[2]=300;

	}		
	for(i=31*17;i<31*18;i++)
	{
		strcpy(plane[i].numb,"T10027");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"安徽");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=51;
		plane[i].time.startminute=39;
		plane[i].time.starthour=10;
		plane[i].time.arrivehour=13;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*17;
		plane[i].price[0]=580;
		plane[i].price[1]=470;
		plane[i].price[2]=400;

	}		
	for(i=31*18;i<31*19;i++)
	{
		strcpy(plane[i].numb,"T10028");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"北京");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=40;
		plane[i].time.startminute=30;
		plane[i].time.starthour=6;
		plane[i].time.arrivehour=8;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*18;
		plane[i].price[0]=350;
		plane[i].price[1]=320;
		plane[i].price[2]=280;

	}		
	for(i=31*19;i<31*20;i++)
	{
		strcpy(plane[i].numb,"T10029");
		strcpy(plane[i].place.startplace,"太原");
		strcpy(plane[i].place.arriveplace,"石家庄");
		strcpy(plane[i].quality[0],"头等舱");
		strcpy(plane[i].quality[1],"商务舱");
		strcpy(plane[i].quality[2],"经济舱");
		plane[i].time.arriveminute=52;
		plane[i].time.startminute=36;
		plane[i].time.starthour=13;
		plane[i].time.arrivehour=16;
		plane[i].seat.whole[0]=10;
		plane[i].seat.whole[1]=20;
		plane[i].seat.whole[2]=50;
		plane[i].seat.part[0]=10;
		plane[i].seat.part[1]=20;
		plane[i].seat.part[0]=50;
		plane[i].year=2017;
		plane[i].month=6;
		plane[i].day=i+1-31*19;
		plane[i].price[0]=500;
		plane[i].price[1]=400;
		plane[i].price[2]=350;

	}

		
	
	for(i=0;i<20*31;i++)
	fwrite(&plane[i],sizeof(struct Airplane),1,fp);
	
	fclose(fp);
	return 0;
}
