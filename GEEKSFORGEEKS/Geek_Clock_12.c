//GeeksForGeeks Problem : 12 Hour Clock Subtraction (School)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,a,b,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		ans = a-b;
		if(ans>=12)
		{
			ans=ans%12;
		}
		else if(ans<0)
		{
			ans=-1*ans;
			ans=ans%12;
			ans=-1*ans;
		}
		printf("%d\n",ans);
	}
	return 0;
}
