//GeeksForGeeks Problem : Small Factorial (school)
//Author : By PIYUSH
#include<stdio.h>
long long int fact(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		printf("%lld\n",fact(no));
	}
	return 0;
}
long long int fact(int no)
{
	if(no==1)
	return 1;
	else
	return no*fact(no-1);
}
