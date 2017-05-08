//CodeChef Problem : Beginner (Factorial)
//Problem Code : FCTRL
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,i,sum;
	long long int no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&no);
		i=5;
		sum=0;
		while(i<=no)
		{
			sum=sum+(no/i);
			i=i*5;
		}
		printf("%d\n",sum);
	}
	return 0;
}
