//GeeksForGeeks Problem : Multiples Power(Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&no);
		while(no--)
		{
			if(no%3==0 || no%7==0)
			sum=sum+no;
			
		}
		printf("%lld\n",sum);
	}
	return 0;
}
