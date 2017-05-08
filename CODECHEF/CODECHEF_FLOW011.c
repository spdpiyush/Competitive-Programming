//CODECHEF Problem: Gross Salary (Beginner)
//Problem Code : FLOW011
//Author : By PIYUSH.
#include<stdio.h>
void sal(int);
int main()
{
	int t,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&s);
		sal(s);
	}
	return 0;
}
void sal(int s)
{
	float gs,hra,da;
	if(s<1500)
	{
		hra=0.1*s;
		da=0.9*s;
	}
	else
	{
		hra=500;
		da=0.98*s;
	}
	
	printf("%g\n",s+hra+da);
}
