//GeeksForGeeks Problem : Frequency Of Array Elements(Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[105],i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=1;i<=n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(i==no[j])
				count++;
			}
			printf("%d ",count);
		}
		printf("\n");
	}
	return 0;
}
