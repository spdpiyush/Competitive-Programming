//GeeksForGeeks Problem : k Largest Elements (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,k,no[105],i,j,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i;j<n;j++)
			{
				if(no[i]<no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			printf("%d ",no[i]);
		}
		printf("\n");
	}
	return 0;
}
