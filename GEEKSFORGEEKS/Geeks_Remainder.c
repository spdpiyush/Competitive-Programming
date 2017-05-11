//GeeksForGeeks Problem :Find the remainder(Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	unsigned long long int no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&no);
		printf("%lld\n",no%7);
	}
	return 0;
}
