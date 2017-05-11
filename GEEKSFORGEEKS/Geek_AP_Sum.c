//GeeksForGeeks Problem : Sum of an AP
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,a,n,d,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d%d",&a,&d);
		sum=(2*a)+(n-1)*d;
		sum=(sum*n)/2;
		printf("%d\n",sum);
	}
	return 0;
}
