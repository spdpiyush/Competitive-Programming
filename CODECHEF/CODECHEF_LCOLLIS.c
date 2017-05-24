//CodeChef Problem : Collisions (Beginner)
//Problem Code : LCOLLIS
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,m,no[100],i,j,k,sum,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<100;i++)
		{
			no[i]=0;
		}
		i=0;
		j=n;
		while(j--)
		{
			for(k=1;k<=m;k++)
			{
				scanf("%d",&no[i]);
				++i;
			}
			i+=10;
		}
		sum=0;
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=i;j<100;j+=10)
			{
				if(no[j] == 1)
				count++;
			}
			if(count>0)
			sum+=sum+(count-1);
			
		}
		printf("%d\n",sum);
	}
	return 0;
}
