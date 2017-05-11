//GeeksForGeeks Problem : Count Increasing SubArrays (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[1005],i,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&no[i]);
		}
		count=0;
		for(i=0;i<n-1;i++)
		{
			if(no[i]<=no[i+1])
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
