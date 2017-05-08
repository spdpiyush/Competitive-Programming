//CODECHEF Problem : Total Expenses (Beginner)
//Problem Code :  FLOW009
//Author : By PIYUSH.
#include<stdio.h>
void total(int,int);
int main()
{
	int t,q,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&q,&p);
		total(q,p);
	}
	return 0;
}
void total(int q,int p)
{
	float  ans,l;
	ans=p*q;
	if(q>1000)
	{
		l=(10*ans)/100;
		ans=ans-l;
	}
	printf("%f\n",ans);
}

