//GeeksForGeeks Problem : Rverse sub Array (Basic)
//Author : By PIYUSH
#include<stdio.h>

int main()
{
	int t,n,no[105],l,r,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		scanf("%d%d",&l,&r);
		l=l-1;
		r=r-1;
		
		for(i=0;i<n;i++)
		{
			if(i==l)
			printf("%d ",no[r]);
			else if(i==r)
			printf("%d ",no[l]);
			else
			printf("%d ",no[i]);
		}
		printf("\n");
	}
	return 0;
}

