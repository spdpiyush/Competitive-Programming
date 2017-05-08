//CodeChef Problem : Drumpf for President(Beginner)
//Problem Code : STUDVOTE
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,k,no,v[101],i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<101;i++)
		{
			v[i]=0;
		}
		count=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&no);
			if(no == i)
			{
				v[no]=-1;	
			}
			else
			{
				if(v[no] == -1)
				v[no]=-1;
				else
			    v[no]+=1;	
			}
		}
		for(i=1;i<=n;i++)
		{
			if(v[i] >= k)
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
