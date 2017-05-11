//GeeksForGeeks Problem : Sort 0's , 1's and 2's (Easy)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[105],i,j,temp;
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
		for(i=0;i<n;i++)
		{
			printf("%d ",no[i]);
		}
		printf("\n");
	}
	return 0;
}
