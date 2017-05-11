//GeeksForGeeks Problem : Subarray with given sum(Easy)
//Author : PIYUSH
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,s,no[102],i,j,sum=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&s);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=0;
			for(j=i;j<n;j++)
			{
				sum=sum+no[j];
				if(sum == s || sum>s)
				break;
			}
			if(sum == s)
			{
				printf("%d %d\n",i+1,j+1);
				break;
			}
		}
		if(sum != s)
		printf("-1\n");
	}
	return 0;
}
