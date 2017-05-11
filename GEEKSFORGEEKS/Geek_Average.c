//GeeksForGeeks Problem: Avergae(School)
//Author :PIYUSH
#include<stdio.h>
int main()
{
	int t,n,a[105],i,j,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n;i++)
		{
			sum=0;
			for(j=0;j<i;j++)
			{
				sum=sum+a[j];
			}
			printf("%d ",sum/i);
		}
		printf("\n");
	}
}
