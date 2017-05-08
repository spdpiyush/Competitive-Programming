//CODECHEF Problem : Find Remainder. (Beginner)
//Problem Code : FLOW002
//Author : By PIYUSH
#include<stdio.h>
void disp(int,int);
int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		disp(a,b);
		printf("\n");
	}
	return 0;
}
void disp(int a,int b)
{
	printf("%d",a%b);
}
