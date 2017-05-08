//CODECHEF Problem : Lucky Four (Beginner)
//Problem Code : LUCKYFOUR
//Author : By PIYUSH.
#include<stdio.h>
void disp(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		disp(no);
		printf("\n");
	}
	return 0;
}
void disp(int no)
{
	int i,count=0;
	while(no)
	{
		i=no%10;
		if(i==4)
		count++;
		no=no/10;
	}
	printf("%d",count);
}
