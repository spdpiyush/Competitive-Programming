//CODECHEF Problem : Fit Squares In Triangle.(Beginner)
//Problem Code : TRISQ
//Author : By PIYUSH.
#include<stdio.h>
int sqr(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		printf("%d\n",sqr(no));
	}
	return 0;
}
int sqr(int no)
{
	int sum=0;
	while(no>=2)
	{
		sum=sum+(no-2)/2;
		no=no-2;
	}
	return sum;
}
