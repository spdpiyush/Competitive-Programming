//CODECHEF Problem : Small Factorial. (beginner)
//Problem Code : FLOW018
//Author : By PIYUSH.
#include<stdio.h>
int fact(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		printf("%d\n",fact(no));
	}
	return 0;
}
int fact(int no)
{
	int fact=1,i;
	if(no==0)
	{
		return fact;
	}
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	return fact;
}
