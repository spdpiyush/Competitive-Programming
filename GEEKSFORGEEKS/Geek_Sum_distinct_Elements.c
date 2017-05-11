//GeeksForGeeks Problem : Sum of Distinct Elements (Basics)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[502],i,sum,j,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
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
		no[n]=0;
		for(i=0;i<n;i++)
		{
			if(no[i]==no[i+1])
			continue;
			else
			sum=sum+no[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
