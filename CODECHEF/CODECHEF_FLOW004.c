//CODECHEF Problem : First and Last Digit. (Beginner)
//Problem Code: FLOW007
//Author : By PIYUSH.
#include<stdio.h>
int first(int);
int last(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		first(no);
		printf("\n");
	}
}
int first(int no)
{
	int sum=0;
	sum= sum + (no%10);
	sum=sum+last(no);
	printf("%d",sum);
}
int last(int no)
{
	int rev=0;
	while(no)
	{
		rev=(rev*10)+(no%10);
		no=no/10;
	}
	return (rev%10);
}
