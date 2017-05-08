//CodeChef Problem :Bear and Ladder(LTIME46)
//Problem Code:BRLADDER
//Author :PIYUSH
#include<stdio.h>
int main()
{
	int t;
	long long int a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		/*
		if(a%2!=0)
		{
			if((b-a==2) || (b==a+1))
			printf("YES\n");
			else
			printf("NO\n");
		}	
		else
		{
			if((b-a==2) ||(b==a-1))
			printf("YES\n");
			else
			printf("NO\n");
		}
		*/
		if((b==a+2) ||(b==a-1 && a%2==0) ||(b==a-2))
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
