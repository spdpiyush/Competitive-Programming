//GeeksForGeeks Problem : Sum of Products(Beginner)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[32],i,sum,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		sum=0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				sum = sum + (no[i] & no[j]);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
