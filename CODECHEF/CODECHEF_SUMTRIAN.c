//CODECHEF Problem : Sum In a Triangle. (Beginner)
//Problem Code : SUMTRIAN
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int t,a[30][30],sum,i,j,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&l);
	    int	a[l][l];
		sum=0;
		for(i=1;i<=l;i++)
		{
			for(j=1;j<=i;j++)
			{
				scanf("%d",&a[i][j]);
				
			}
			if(i==l)
				{
					sum=sum+a[l][2];
				}
				else
				{
					sum=sum+a[i][1];
				}
		}
		printf("%d\n",sum);
	}
	return 0;
}
