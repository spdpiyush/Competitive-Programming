//CodeChef Problem : Devu and Friendship(Beginner)
//Problem Code : CFRTEST
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[101],i,j,count,sum,l;
	scanf("%d",&t);
	while(t--)
	{
		l=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
			if(no[i]>l)
			l=no[i];
		}
		sum=0;
		count=0;
		for(i=1;i<=l;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(i==no[j])
				count++;
			}
			if(count>=1)
			sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
