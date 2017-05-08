//CODECHEF Problem:Mag-Inc Operations.(Clash Credenz 2016 Wildcard Round )
//Problem Code:CCWR02
//Author:By PIYUSH.
#include<stdio.h>
int sum(int [],int [],int,int);
int main()
{
	int t,x,k,i,res,ans;
	int num[1000],den[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&k);
		num[k];
		den[k];
		for(i=0;i<k;i++)
		{
			scanf("%d",&num[i]);
		}
		for(i=0;i<k;i++)
		{
			scanf("%d",&den[i]);
		}
		res=sum(num,den,k,x);
		ans=res-x;
		printf("%d\n",(ans*100)/res);
	}
	return 0;
}
int sum(int num[],int den[],int k,int x)
{
	int m,i,j;
	m=x;
	for(i=0;i<k;i++)
	{
		j=(num[i]*m)/den[i];
		m+=(int)j;
	}
	return m;
}
