//CodeChef Problem : Count Of Maximum(Peer)
//Problem Code : MAXCOUNT
//Author: Piyush
#include<stdio.h>
int main()
{
	int t,n,no[10001],i,j,l,val;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<10001;i++)
		{
			no[i]=0;
		}
		for(i=1;i<=n;i++)
		{
			scanf("%d",&j);
			++no[j];
		}
		l=0;
		for(i=1;i<10001;i++)
		{
			if(no[i]>l)
			{
				l=no[i];
				val=i;
			}
		}
		printf("%d %d\n",val,l);
	}
	return 0;
}
