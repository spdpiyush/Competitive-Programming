//GeeksForGeeks Problem : Series GP (Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int t,a,b,sum=0,n,i;
	int r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		r=floor(b/a);
		scanf("%d",&n);
		sum=0;
		for(i=1;i<=n;i++)
		{
			sum=sum+a;
			a=a*r;
		}
		printf("%d\n",sum);
	}
	return 0;
}
