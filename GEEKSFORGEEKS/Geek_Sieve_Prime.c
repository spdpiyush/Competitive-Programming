//GeeksForGeeks Problem :  Sieve of Eratosthenes(Basic)
//Author : By PIYUSH
#include<stdio.h>
int prime(int);
int main()
{
	int t,no,ans,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		for(i=2;i<=no;i++)
		{
			ans=prime(i);
			if(ans == 0)
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
int prime(int no)
{
	int i,x=0;
	for(i=2;i<=(no/2);i++)
	{
		if(no%i == 0)
		{
			x++;
			break;
		}
	}
	if(x == 0)
	return 0;
	else
	return 1;
}
