//GeeksForGeeks Problem : Equal to Product (School)
//Author :By PIYUSH.
#include<stdio.h>
int main()
{
	int t,n,p,no[1005],i,j,count,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&p);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		l=0;
		for(i=0;i<n-1;i++)
		{
			count=0;
			for(j=i;j<n;j++)
			{
				if(no[i]*no[j]==p)
				{
					l++;
					count++;
					break;
				}
			}
			if(count>0)
			{
				printf("Yes\n");
				break;
			}
		}
		if(l==0)
		printf("No\n");
	}
	return 0;
}
