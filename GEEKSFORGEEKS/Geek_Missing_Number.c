//GeekForGeeks Problem : Missing Number(School)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[10005]={0},i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<10005;i++)
		{
			no[i]=0;
		}
		scanf("%d",&n);
		for(i=0;i<n-1;i++)
		{
			scanf("%d",&j);
			no[j]=j;
		}
		for(i=1;i<=n;i++)
		{
			if(no[i]==0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
