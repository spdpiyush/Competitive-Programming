//GeeksForgeeks Problem : Simple Interest (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,p,r,ti;
	long long int si;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&p,&ti,&r);
		si=(p*r*ti)/100;
		printf("%lld\n",si);
	}
	return 0;
}
