//CODECHEF Problem : Second Largest.(Beginner)
//Problem Code : FLOW017
//Author : By PIYUSH.
#include<stdio.h>
void disp(int,int,int);
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		disp(a,b,c);
		printf("\n");
	}
	return 0;
}
void disp(int a,int b,int c)
{
	if(a>b && b>c)
	printf("%d",b);
	else if(a>c && c>b)
	printf("%d",c);
	else if(b>a && a>c)
	printf("%d",a);
	else if(b>c && c>a)
	printf("%d",c);
	else if(c>a && a>b)
	printf("%d",a);
	else if(c>b && b>a)
	printf("%d",b);
}
