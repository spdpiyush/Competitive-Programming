//GeeksForGeeks Problem : a^b (School)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,a,b;
	long long int ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		ans=pow(a,b);
		printf("%lld\n",ans);
	}
	return 0;
}
