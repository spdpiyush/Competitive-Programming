//GeeksForGeeks Problem : Invert the Bits (Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t;
	long long int no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&no);
		no = (4294967296) - no -1;
		printf("%lld\n",no);
	}
	return 0;
}
