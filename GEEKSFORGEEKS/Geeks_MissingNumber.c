//GeeksForGeeks Problem : Missing Number In Array (Beginner)
//Author :By PIYUSH
#include<stdio.h>
int miss(int,int);
int main()
{
	int t,n,no[1005],i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n-1;i++)
		{
			scanf("%d",&no[i]);
		}
		for(j=1;j<=n;j++)
		{
			count=0;
			for(i=0;i<n-1;i++)
			{
				if(j==no[i])
				count++;
			}
			if(count==0)
			printf("%d\n",j);
		}
	}
	return 0;
}
