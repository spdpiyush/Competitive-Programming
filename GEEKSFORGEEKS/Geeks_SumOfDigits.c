//GeeksForGeeks Problem : Sum of Digits (Basic)
//Author : By PIYUSH
#include<stdio.h>
void sum(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		sum(no);
	}
	return 0;
}
void sum(int no)
{
	int sum=0;
	while(no)
	{
		sum=sum+(no%10);
		no=no/10;
	}
	printf("%d\n",sum);
}
