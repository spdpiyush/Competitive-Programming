//GeeksForGeeks problem : Binary Array Sorting (School)
//Problem : Binary Array Sorting
#include<stdio.h>
int main()
{
	int t,no[105],i,temp,j,n;
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
		for(i=0;i<n;i++)
		{
			printf("%d ",no[i]);
		}
		printf("\n");
	}
}
