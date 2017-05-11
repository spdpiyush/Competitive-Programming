//GeeksForGeeks Problem : Sort The Array(Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[1005],i,j,temp;
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
