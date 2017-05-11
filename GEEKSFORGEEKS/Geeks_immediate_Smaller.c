//GeeksForGeeks Problem : Immediate Smaller Element (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[505],i;
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
			if(no[i]>no[i+1])
			printf("%d ",no[i+1]);
			else
			printf("-1 ");
		}
		printf("-1\n");
	}
	return 0;
}
