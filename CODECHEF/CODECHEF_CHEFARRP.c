//CodeChef Problem : Chef and SubArrays (Beginner)
//Problem Code : CHEFARRP
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,i,j,k,count;
	long long int no[52],sum,mul;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		mul=1;
		count=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&no[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				sum=0;
				mul=1;
			  for(k=i;k<=j;k++)	
			  {
			  	sum=sum+no[k];
			  	mul=mul*no[k];
			  }
			  if(sum==mul)
			  count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
