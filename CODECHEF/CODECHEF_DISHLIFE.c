//CodeChef Problem : Dish of Life (Beginner)
//Problem Code : DISHLIFE
//Author : PIYUSH
#include<stdio.h>
void  chec(int [],int,int);
int val[100002];
int main()
{
	int t,n,k,p,no[100002],j,i,ac,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<=k;i++)
		{
			val[i]=0;
		}
		ac=0;
		count=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&p);
			for(j=0;j<p;j++)
			{
				scanf("%d",&no[j]);
			}
			if(p==k)
			ac++;
			else
			chec(no,p,k);
		}
		if(ac >= 1)
		printf("some\n");
		else
		{
			for(i=1;i<=k;i++)
			{
				if(val[i]==1)
				count++;
			}
			if(count==k)
			printf("all\n");
			else
			printf("sad\n");
		}
	}
	return 0;
}
void chec(int no[],int p,int k)
{
	int i;
	for(i=0;i<p;i++)
	{
		val[no[i]]=1;
	}
	
}
