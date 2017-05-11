//GeeksForGeeks Problem : Print The Kth Digit ( Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,k,a,b,j;
	long long int ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		scanf("%d",&k);
		ans=pow(a,b);
		do
		{
			j=ans%10;
			ans=ans/10;
			k--;
		}
		while(k);
		printf("%d\n",j);
	}
	return 0;
}
