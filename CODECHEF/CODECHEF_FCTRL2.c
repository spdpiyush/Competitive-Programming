//CodeChef Problem : Beginner(Small Factorials)
//Problem Code : FCTRL2
//Author : By PIYUSH
#include<stdio.h>
int fact(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		printf("%d",fact(no));
	}
	return 0;
}
int fact(int x)
{
	if(x==0)
	return 1;
	else
	return x*fact(x-1);
}
