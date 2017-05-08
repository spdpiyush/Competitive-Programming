//CODECHEF Problem : Rverse The Number. (Beginner)
//Problem Code : FLOW007
//Author : By PIYUSH.
#include<stdio.h>
void rev(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		rev(no);
		printf("\n");
	}
	return 0;
}
void rev(int no)
{
	int rev=0;
	while(no)
	{
		rev=(rev*10)+(no%10);
		no=no/10;
	}
	printf("%d",rev);
}
