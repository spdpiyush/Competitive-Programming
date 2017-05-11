//GeeksForGeeks Problem : Find Number Of Days Between Two Given Dates (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,d,m,y,d1,d2,m1,m2,y1,y2,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d%d",&d1,&m1,&y1);
		scanf("%d%d%d",&d2,&m2,&y2);
		y=abs(y2-y1);
		sum=sum+(y*365);
		m=abs(m2-m1);
		if((y1%4==0 || y1%400==0) ||(y2%4==0 || y2%400==0 && m2>1))
		{
			if(m==1)
			{
				sum=sum+29;
			}
			else
			sum=sum+29+((m-1)*30);
		}
		else
		{
			if(m==1)
			sum=sum+28;
			else
			sum=sum+28+((m-1)*28);
		}
		d=abs(d2-d1);
		sum=sum+d;
		printf("%d\n",sum);
	}
	return 0;
}
