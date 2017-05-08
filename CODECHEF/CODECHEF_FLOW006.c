//CODECHEF Problem : Sum Of Digits. (Beginner)
//Problem Code : FLOW006
//Author : By PIYUSH.
#include<stdio.h>
void dis(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		dis(no);
		printf("\n");
	}
	return 0;
}
void dis(int no)
{
	int sum=0;
	while(no)
	{
	sum= sum+(no%10);
	no=no/10;	
	}
	printf("%d",sum);
}

