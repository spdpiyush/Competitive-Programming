//CodeChef Problem : Buy 1 Get 1 Free(Easy)
//Problem Code : BUY1GET1
//Author : Piyush
#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,no[150],i,sum;
	char str[202];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		sum=0;
		for(i=65;i<=122;i++)
		{
			no[i]=0;
		}
		for(i=0;i<l;i++)
		{
			++no[str[i]];
		}
		for(i=65;i<=122;i++)
		{
			if(no[i]>0)
			{
				sum+=no[i]/2;
				sum+=no[i]%2;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
