//CodeChef Problem : Minimum Maximum(Beginner)
//Problem Code: MNMX
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[100002],i,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		sum=no[0];
		for(i=0;i<n;i++)
		{
			if(no[i]<sum)
			sum=no[i];
		}
		printf("%d\n",sum*(n-1));
	}
	return 0;
}
