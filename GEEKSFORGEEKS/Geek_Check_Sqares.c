//GeeksForGeeks Problem : Check Squares (Beginner)
//Author : PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,sum,a,s1,b,i,j;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		a=sqrt(n);
		for(i=0;i<=a;i++)
		{
			
			s1=0;
			for(j=0;j<=i;j++)
			{
				b=j*j;
				sum =(i*i) + b;
				if(sum == n)
				{
					s1=1;
					break;
				}	
			}
			if(s1==1)
			break;
		}
		if(s1 == 1)
		printf("1\n");
		else
		printf("0\n");
	}
	return 0;
}
