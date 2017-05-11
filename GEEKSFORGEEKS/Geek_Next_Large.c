//GeeksForGeeks Problem : Next Larger Element ( Easy )
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[1005],i,j,ans;
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
				if(no[j]>no[i])
				{
					ans=no[j];
					break;
				}
				else
				ans=-1;
			}
			printf("%d ",ans);
		}
		printf("-1\n");
	}
	return 0;
}
