//CodeChef Problem : Strange Operations (Begineer)
//Problem Code : UTMOPR
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,k,no,sum,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		sum=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&no);
			sum=sum+no;
		}
		if(sum%2==0)
		{
			if(k==1)
			printf("odd\n");
			else
			printf("even\n");
		}
		else
		printf("even\n");
	}
	return 0;
}
