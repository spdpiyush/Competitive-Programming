//GeeksForGeeks Problem : Minimum Difference Pair (Basic)
//Author :By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[105],b[105],i,j,temp;
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
		for(i=0;i<n-1;i++)
		{
			b[i]=no[i+1]-no[i];
		}
		for(i=0;i<n-2;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		printf("%d\n",b[0]);
		
	}
	return 0;
}
