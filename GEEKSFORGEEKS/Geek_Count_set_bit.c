//GeeksForGeeks Problem : Count Total Set Bits (Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,i,j,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=1;
		for(i=2;i<=n;i++)
		{
			j=i;
			while(j)
			{
				if(j%2 == 1)
				sum++;
				j=j/2;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
