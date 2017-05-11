//GeeksForGeeks Problem : Equilibrium point(Easy)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[102],i,j,k,count,sum1,sum2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		sum1=0;
		sum2=0;
		count=0;
		for(i=0;i<n;i++)
		{
			sum1=0;
			sum2=0;
			for(j=0;j<i;j++)
			{
				sum1=sum1+no[j];
			}
			for(k=i+1;k<n;k++)
			{
				sum2=sum2+no[k];
			}
			if(sum1==sum2)
			{
				count=i+1;
				break;
			}
			else
			count=-1;
		}
		printf("%d\n",count);
	}
	return 0;
}
