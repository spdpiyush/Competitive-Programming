//CodeChef Problem : Lazy Jem (Begineer)
//Problem Code : TALAZY
//Author : PIYUSH
#include<stdio.h>
void check(long long int,long long int,long long int);
long long int sum = 0;
int main()
{
	int t;
	long long int n,b,m,p;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld%lld%lld",&n,&b,&m);
		check(n,b,m);
		/*while(n>=1)
		{
			if(n == 1)
			{
				sum = sum + (n * m);
				n=0;
			}
			else if(n%2==0)
			{
				p=(n/2);
				sum = sum + (p * m) + b;
				m=2*m;
				n=n-p;
			}
			else
			{
				p=(n+1)/2;
				sum = sum + (p * m) + b;
				m=2*m;
				n=n-p;
			}
		}*/
		printf("%lld\n",sum);
	}
	return 0;
}
void check(long long int n,long long int b,long long int m)
{
	long long int p;
	if(n ==  1)
	sum = sum + m;
	else if(n%2==0)
	{
		p=n/2;
		n=n-p;
		sum = sum + (p * m) + b;
	    check(n,b,2*m);
	}
	else
	{
		p=(n+1)/2;
		n=n-p;
		sum = sum + (p * m) + b;
		check(n,b,2*m);
	}
}
