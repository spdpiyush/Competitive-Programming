//CODECHEF Problem : Smallest Numbers Of Notes.(Beginner)
//Problem Code : FLOW005
//Author : By PIYUSH.
#include<stdio.h>
int notes(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		printf("%d\n",notes(no));
	}
	return 0;
}
int notes(int no)
{
	int sum=0;
	if(no>=100)
	{
		sum=sum+(no/100);
		no=no%100;
	}
	if(no>=50)
	{
		sum=sum+(no/50);
		no=no%50;
	}
	if(no>=10)
	{
		sum=sum+(no/10);
		no=no%10;
	}
	if(no>=5)
	{
		sum=sum+(no/5);
		no=no%5;
	}
	if(no>=2)
	{
		sum=sum+(no/2);
		no=no%2;
	}
	if(no>=1)
	{
		sum=sum+no;
	}
	return sum;
}
