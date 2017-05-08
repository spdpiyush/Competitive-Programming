//CodeChef Problem : Cooling Piles (Peer)
//Problem Code : COOLING
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[32],w[32],i,count,j,temp;
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
			scanf("%d",&w[i]);
		}
		for(i=0;i<n-1;i++)
		{
		    for(j=i+1;j<n;j++)	
		    {
		    	if(w[i]>w[j])
		    	{
		    		temp=w[i];
		    		w[i]=w[j];
		    		w[j]=temp;
		    	}
		    	if(no[i]>no[j])
		    	{
		    		temp=no[i];
		    		no[i]=no[j];
		    		no[j]=temp;
		    	}
		    }
		}
		count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(w[j]>=no[i] && w[j]!=-1)
				{
					count++;
					w[j]=-1;
					break;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
