//GeeksForGeeks Problem : Search an Element in an Array. (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[105],i,a,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		count=0;
		scanf("%d",&a);
		for(i=0;i<n;i++)
		{
			if(a==no[i])
			{
				count++;
				break;
			}
		}
		if(count!=0)
		printf("%d\n",i);
		else
		printf("-1\n");
	}
	return 0;
}
