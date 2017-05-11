//GeeksForGeeks Problem : Odd Divisors (Basic)
//Author : PIYUSH
#include<stdio.h>
int check(int);
int main()
{
	int t,n,i,j,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=1;
		for(i=2;i<=n;i++)
		{
			j=check(i);
			if(j%2!=0)
			sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
int check(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	return count;
}
