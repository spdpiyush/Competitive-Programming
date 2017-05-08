//CodeChef Problem : Xenny and Alternating Tasks (Beginner)
//Problem Code : XENTASK
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,x[100002],y[100002],i,sum1,sum2;
	scanf("%d",&t);
	while(t--)
	{
		sum1=0;
		sum2=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&y[i]);
		}
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			sum1=sum1+x[i];
			else
			sum1=sum1+y[i];
		}
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			sum2=sum2+y[i];
			else
			sum2=sum2+x[i];
		}
		if(sum1>sum2)
		printf("%d\n",sum2);
		else
		printf("%d\n",sum1);
	}
	return 0;
}
