//GeeksForGeeks Problem : Max Value (Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[200],ma[200],i,j,ans,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n;i++)
		{
			ma[i]=0;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i!=j)
				{
					ans=(no[i]-i)-(no[j]-j);
					if(ans>ma[i])
					ma[i]=ans;
				}
			}
		}
		l=ma[0];
		for(i=1;i<n;i++)
		{
			if(ma[i]>l)
			l=ma[i];
		}
		printf("%d\n",l);
	}
	return 0;
}
