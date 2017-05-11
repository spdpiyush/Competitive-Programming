//GeeksForGeek Problem : A Guy With Mental Problem (Basic)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,a[1001],b[1001],i,j,sum_a,sum_b;
	scanf("%d",&t);
	while(t--)
	{
		sum_a=0;
		sum_b=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			{
				sum_a=sum_a + a[i];
				sum_b=sum_b + b[i];
			}
			else
			{
				sum_a += b[i];
				sum_b += a[i];
			}
		}
		if(sum_a>sum_b)
		printf("%d\n",sum_b);
		else
		printf("%d\n",sum_a);
	}
	return 0;
}
