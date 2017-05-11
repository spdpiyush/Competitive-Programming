//GeeksForGeeks Problem : Sum of Elements between k1 and k2 smallest elements(Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[52],i,j,temp,sum,k1,k2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			
			scanf("%d",&no[i]);
		}
		scanf("%d%d",&k1,&k2);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[i]>no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		sum=0;
		for(i=k1;i<k2-1;i++)
		{
			sum=sum+no[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
