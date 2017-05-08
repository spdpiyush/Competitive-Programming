//COODECHF Problem : Grade The Steel (Begiinner)
//Problem Code :  FLOW014
//Author : By PIYUSH.
#include<stdio.h>
#define H 50
#define C 0.7
#define T 5600
void grade(int,float,int);
int main()
{
	int h,t,no;
	float c;
	scanf("%d",&no);
	while(no--)
	{
		scanf("%d%f%d",&h,&c,&t);
		grade(h,c,t);
	}
	return 0;
}
void grade(int h,float c,int t)
{
	if(h>H && c<C && t>T)
	printf("10\n");
	else if(h>H && c<C)
	printf("9\n");
	else if(c<C && t>T)
	printf("8\n");
	else if(h>H && t>T)
	printf("7\n");
	else if(h>H || c<C || t>T)
	printf("6\n");
	else
	printf("5\n");
}
