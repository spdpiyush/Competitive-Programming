//GeeksForGeeks Problem:nth Digit Of Fibonacci(Basic)
//Author : Piyush
#include<stdio.h>
int fib(int);
int main()
{
	int t,n,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		printf("%d\n",fib(n));
	}
	return 0;
}
int fib(int no)
{
	if(no==0 || no==1)  
	return 1;
	else
	{
	   return fib(no-1) + fib (no-2);
	}
}
