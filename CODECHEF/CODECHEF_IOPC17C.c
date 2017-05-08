//CodeChef Problem : Max Out (IOPC2017)
//Problem Code : IOPC17C
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[100002],i,j,re,re1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		re=0;
		for(i=0;i<n-1;i++)
		{
			re1=no[i]%no[i+1];
			if(re1>re)
			re=re1;
		}
		printf("%d\n",re);
	}
	return 0;
}
