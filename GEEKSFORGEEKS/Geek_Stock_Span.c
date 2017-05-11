//GeeksForGeeks Problem : Stock span Problem (Easy)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[805],i,j,sum;
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
			sum=1;
			if(i == 0)
	         printf("%d ",sum);
			else if(no[i-1]<=no[i])
			{
			  for(j=i;j>=0;j--)
			  {
				if(no[j]<no[i])
				sum=sum+1;
			  }	
			  printf("%d ",sum);
			}
			else
			printf("%d ",sum);
			
		}
		printf("\n");
	}
	return 0;
}
