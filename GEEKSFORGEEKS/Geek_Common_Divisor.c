//GeeksForGeeks Problem : Common Divisors(School)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,a,b,count,ans,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		if(a>b)
		ans=a;
		else
		ans=b;
		count=0;
		for(i=1;i<=ans;i++)
		{
			if(a%i==0 && b%i==0)
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
