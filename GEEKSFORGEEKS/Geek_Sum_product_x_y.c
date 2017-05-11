//GeeksForGeeks Problem : Sum of Product of x and y (Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,x,y,sum=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(x=1;x<=n;x++)
		{
			y=n/x;
			sum=sum + (x*y);
		}
		printf("%d\n",sum);
	}
	return 0;
}
