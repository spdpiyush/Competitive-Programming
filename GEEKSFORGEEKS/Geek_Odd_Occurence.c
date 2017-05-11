//GeeksForGeeks Problem : ODD Occurence (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[205],i,j,count;
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
			count=0;
			for(j=0;j<n;j++)
			{
				if(no[i]==no[j])
				{
					count++;
				}
			}
			if(count%2!=0)
			{
				printf("%d\n",no[i]);
				break;
			}
		}
	}
	return 0;
}
