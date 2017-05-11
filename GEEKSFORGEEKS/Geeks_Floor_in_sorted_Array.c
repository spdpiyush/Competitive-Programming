//GeeksForGeeks Problem : Floor in a Sorted Array(Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,x,no,l,count,i,ans;
	scanf("%d",&t);
	while(t--)
	{
		l=0;
		count=0;
		scanf("%d%d",&n,&x);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&no);
			if(no>=l && no<=x)
			{
				ans=i-1;
				count++;
			}
		}
		if(count==0)
		printf("-1\n");
		else
		printf("%d\n",ans);
	}
	return 0;
}
