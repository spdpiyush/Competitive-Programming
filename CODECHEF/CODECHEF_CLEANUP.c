//CodeChef Problem : Cleaning Up (Easy)
//Problem Code : CLEANUP
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,m,no[1002],i,comp,chef[1002],as[1002],p,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<=n;i++)
		{
			no[i]=0;
			chef[i]=0;
			as[i]=0;
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d",&comp);
			no[comp]=1;
		}
		k=0;
		p=0;
		j=0;
		for(i=1;i<=n;i++)
		{
			if(no[i]==0)
			{
				k++;
				if(k%2!=0)
				{
					chef[j]=i;
					j++;
				}
				else
				{
					as[p]=i;
					p++;
				}
			}
		}
		if(chef[0]==0)
		{
		}
		else
		{
		  for(i=0;i<j;i++)	
		  {
		  	printf("%d ",chef[i]);
		  }
		}
		printf("\n");
		if(as[0]==0)
		{
			
		}
		else
		{
			for(i=0;i<p;i++)
			{
				printf("%d ",as[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
