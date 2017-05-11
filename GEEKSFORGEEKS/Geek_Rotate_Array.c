//GeeksForGeeks Problem : Rotate Array By n Elements (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,d,no[105],i;
	static int j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&d);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		j=0;
		for(i=0;i<n;i++)
		{
			if(i<n-d)
			{
				printf("%d ",no[i+d]);
			}
			else
			{
				printf("%d ",no[j]);
				j++;
			}
		}
		printf("\n");
	}
	return 0;
}
