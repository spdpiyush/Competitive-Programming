//GeeksForGeeks Problem : Nth Fibonacci Number (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,i;
	long long int f[1005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
			f[0]=0;
	f[1]=1;
	for(i=2;i<no;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	printf("%lld\n",f[no-1]);
	}
	return 0;
}
