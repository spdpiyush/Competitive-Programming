//GeeksForGeeks Problem : Find The Median (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[105],i,j,temp,ans;
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
			for(j=i;j<n;j++)
			{
				if(no[i]>no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		if(n%2==0)
		{
			ans=no[n/2]+no[n/2-1];
			ans=ans/2;
		}
		else
		{
			ans=no[n/2];
		}
		printf("%d\n",ans);
	}
	return 0;
}
