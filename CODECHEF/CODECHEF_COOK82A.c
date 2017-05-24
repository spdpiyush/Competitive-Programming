//CodeChef Problem : La Liga (COOK82)
//Problem Code : COOK82A
//Author : Piyush
#include<stdio.h>
int main()
{
	char str[20];
	int i,t,b,m,r,e,no;
	scanf("%d",&t);
	while(t--)
	{
		for(i=1;i<=4;i++)
		{
			scanf("%s%d",str,&no);
			if(str[0]=='B')
			b=no;
			else if(str[0]=='M')
			m=no;
			else if(str[0]=='R')
			r=no;
			else
			e=no;
		}
		if(r<m && b>e)
		printf("Barcelona\n");
		else
		printf("RealMadrid\n");
	}
	return 0;
}
