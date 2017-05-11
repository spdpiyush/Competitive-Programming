//GeeksForGeeks Problem : Bit Difference (Basic)
//Author : PIYUSH
#include<stdio.h>
int bin1(int);
int bin2(int);
int a[10],b[10];
int main()
{
	int t,no1,no2,i,count;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<10;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		scanf("%d%d",&no1,&no2);
		bin1(no1);
		bin2(no2);
		count=0;
		for(i=0;i<10;i++)
		{
			if(a[i]!=b[i])
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
int bin1(int no)
{
	int i=9;
	while(no)
	{
		a[i]=no%2;
		no=no/2;
		i--;
	}
}
int bin2(int no)
{
	int i=9;
	while(no)
	{
		b[i]=no%2;
		no=no/2;
		i--;
	}
}
