//GeeksForGeeks Problem :Inverted triangle of stars(School)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,i,j,k,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		p=n;
		for(i=1;i<=n;i++)
		{
			for(j=2*p-1;j>=1;j--)
			{
				printf("*");
			}
			for(k=1;k<=i;k++)
			{
				printf(" ");
			}
			p--;
			
		}
		printf("\n");
	}
	return 0;
}
