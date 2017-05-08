//CodeChef Problem : Cooking Machine(Begineer)
//Problem Code : COOKMACH
//Author : PIYUSH
#include<stdio.h>
int work(long long int,long long int);
int main()
{
	int t,count;
	long long int a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		count=work(a,b);
		printf("%d\n",count);
	}
	return 0;	
}
int work(long long int a,long long int b) 
{
	if(a==b)
	return 0;
	else if(b>a)
	{
		if(b%a==0)
		{
			a*=2;
			return 1 + work(a,b);
		}
		else
		{
			a=1;
			return 1 + work(a,b);
		}
	}
	else
	{
		if(a%2==0)
		{
			a/=2;
			return 1 + work(a,b);
		}
		else
		{
			a=1;
			return 1 + work(a,b);
		}
	}
}

