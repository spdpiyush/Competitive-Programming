//CodeChef Problem : Devu and Grapes(Beginner)
//Problem Code : DEVUGRAP
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t;
	long long int n,no,k,i,rem,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld%lld",&n,&k);
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&no);
			rem=no%k;
			if(no/k == 0)
			sum=sum+(k-rem);
			else if(rem < k-rem)
			sum = sum+rem;
			else
			sum=sum+(k-rem);
		}
		printf("%lld\n",sum);
	}
	return 0;
}
