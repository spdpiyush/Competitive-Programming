//GeeksForGeeks Problem : Pairs of the Prime Number(Basic)
//Author : Piyush
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int t,n,no[200],i,j,k,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		k=0;
		for(i=2;i<=n;i++)
		{
			x=0;
			for(j=2;j<i;j++)
			{
			  if(i%j == 0)
			  {
			  	x++;
			  	break;
			  }	
			}
			if(x == 0)
			{
				no[k]=i;
				k++;
			}
		}
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				if((no[i]*no[j]) <= n)
				printf("%d %d ",no[i],no[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
