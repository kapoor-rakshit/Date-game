#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
struct dates
{
	int day;
	int month;
	int year;
}d[10];
int main()
{
int n,y,a,r,s,j,k,l,z,q=1,i,flag;char choice='y';
while(choice=='y'&&q==1)
{
printf("\nhow many dates to work on\n");
scanf("%d",&z);
for(i=0;i<z;i++)
{
	printf("enter date %d\n",i+1);
scanf("%d%d%d",&d[i].day,&d[i].month,&d[i].year);
printf("\n");
}
re:
printf("1. add given dates(press 1) OR \n2. add days/months/years to date(press 2) OR \n3. subtract days/months/years from date(press 3) \n");

scanf("%d",&s);
switch(s)
{
	case 2:
		printf("To which date\n");
scanf("%d",&a);
		printf("enter days to add\n");
scanf("%d",&n);
printf("enter months to add\n");
scanf("%d",&j);
printf("enter years to add\n");
scanf("%d",&k);
	r=d[a-1].day+n;y=d[a-1].month+j;l=d[a-1].year+k;
	if(l%4==0&&y==2)
	{
		while(r>29)
		{

		r=r-29;
		y++;}
	}
	if((l%4==0&&y!=2)||l%4!=0)
	{
		if(y==2)
		{
		while(r>28)
		{

		r=r-28;
		y++;}
		}
		if(y<=7&&y%2!=0)
		{
			while(r>31)
		{
		r=r-31;
		y++;}
		}
		if(y<=7&&y%2==0)
		{
			while(r>30)
		{
		r=r-30;
		y++;}
		}
		if(y>7&&y%2==0)
		{
			while(r>31)
		{
		r=r-31;
		y++;}
		}
		if(y>7&&y%2!=0)
		{
			while(r>30)
		{
		r=r-30;
		y++;}
		}
	}
	if(y>12)
	{
		while(y>12)
		{
		y=y-12;
		l++;}
	}
	printf("\n%d %d %d",r,y,l);
	break;
	case 3:
		printf("From which date");
scanf("%d",&a);
		printf("enter days to subtract\n");
scanf("%d",&n);
printf("enter months to subtract\n");
scanf("%d",&j);
printf("enter years to subtract\n");
scanf("%d",&k);
	r=d[a-1].day-n;y=d[a-1].month-j;l=d[a-1].year-k;
	if(y<=0)
	{
			while(y<=0)
		{
		y=y+12;
		l--;}
	}
	if(l%4==0&&y==3)
	{
		while(r<=0)
		{

		r=r+29;
		y--;}
	}
	if((l%4==0&&y!=2)||l%4!=0)
	{
		if(y==2)
		{
		while(r<=0)
		{

		r=r+31;
		y--;}
		}
		if(y<=7&&y%2!=0)
		{
			while(r<=0)
		{
		r=r+30;
		y--;}
		}
		if(y<=7&&y%2==0)
		{
			while(r<=0)
		{
		r=r+31;
		y--;}
		}
		if(y>7&&y==8)
		{
			while(r<=0)
		{
		r=r+31;
		y--;}
		}
		if(y>7&&y%2==0)
		{
			while(r<=0)
		{
		r=r+30;
		y--;}
		}
		if(y>7&&y%2!=0)
		{
			while(r<=0)
		{
		r=r+31;
		y--;}
		}
	}
	printf("\n%d %d %d",r,y,l);
	break;
	case 1:
		for(i=0;i<z-1;)
		{
			flag=0;
	    if(d[i].year==d[++i].year)
	    flag=1;
	    }
	    if(flag==1)
	    {
		r=d[0].day+d[1].day;y=d[0].month+d[1].month;
		if(y>12)
	{
		while(y>12)
		{
		y=y-12;
		d[0].year++;}
	}
	if(d[0].year%4==0&&y==2)
	{
		while(r>29)
		{

		r=r-29;
		y++;}
	}
	if((d[0].year%4==0&&y!=2)||d[0].year%4!=0)
	{
		if(y==2)
		{
		while(r>28)
		{

		r=r-28;
		y++;}
		}
		if(y<=7&&y%2!=0)
		{
			while(r>31)
		{
		r=r-31;
		y++;}
		}
		if(y<=7&&y%2==0)
		{
			while(r>30)
		{
		r=r-30;
		y++;}
		}
		if(y>7&&y%2==0)
		{
			while(r>31)
		{
		r=r-31;
		y++;}
		}
		if(y>7&&y%2!=0)
		{
			while(r>30)
		{
		r=r-30;
		y++;}
		}
	}
	printf("\n%d %d %d",r,y,d[0].year);

}
else printf("\nYears must be same in order to get a valid result\n");
break;
	default:
		printf("check the code entered..");
	}

		printf("\ndo you want to work more(y/n)\n");
		fflush(stdin);
		choice=getche();
		if(choice=='y')
		{
		printf("\n1. With new dates(press 1) OR \n2. Previous dates(press 2)\n");
		scanf("%d",&q);
		if(q==2)
		goto re;
		}
	}
}

