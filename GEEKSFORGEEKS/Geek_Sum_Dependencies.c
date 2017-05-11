//GeeksForGeeks Problem : Sum of Dependencies in a Graph(Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,e,no[151],l,u,v,i,sum;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<151;i++)
		{
			no[i]=0;
		}
		l=0;
		sum=0;
		scanf("%d%d",&n,&e);
		for(i=1;i<=e;i++)
		{
			scanf("%d%d",&u,&v);
			no[u]++;
			if(u>l)
			l=u;
		}
		for(i=0;i<=l;i++)
		{
			sum=sum+no[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
