//CodeChef Problem : Coins And Triangle(Beginner)
//Problem Code : TRICOIN
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,j,sum,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		j=n;
		for(i=1;i<=n;i++)
		{
			j=j-i;
			if(j>=0)
			{
				sum++;
			}
			else
			break;
		}
		printf("%d\n",sum);
	}
	return 0;
}
