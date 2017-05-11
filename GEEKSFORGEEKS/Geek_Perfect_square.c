//GeekForGeeks Problem : Perfect Squares in a Range(Basic)
//Author : PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long long int a,b,sum,i,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		i=sqrt(b);
		count=0;
		while(1)
		{
			if((i*i)>=a && (i*i)<=b)
			count++;
			else
			break;
			--i;
		}
		printf("%lld\n",count);
	}
	return 0;
}
