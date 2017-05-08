//CodeChef Problem : Cops and the Thief Devu(Beginner)
//Problem Code : COPS
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,m,x,y,co,to[101],i,re,count,j,k;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		for(i=0;i<101;i++)
		{
			to[i]=0;
		}
		scanf("%d%d%d",&m,&x,&y);
		re=x*y;
		for(i=1;i<=m;i++)
		{
			scanf("%d",&co);
			to[co]=1;
			for(j=co+1;(j<=re+co && j<=100);j++)
			{
				to[j]=1;
			}
			for(k=co-1;(k>=co-re && k>=1);k--)
			{
				to[k]=1;
			}
		}	
		for(i=1;i<101;i++)
		{
			if(to[i]==0)
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
