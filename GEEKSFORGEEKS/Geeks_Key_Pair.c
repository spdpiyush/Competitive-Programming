//GeeksForGeek Problem : Key Pair (Easy)
//Author :By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,x,i,no[205],j,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&x);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		l=0;
		for(i=0;i<n-1;i++)
		{
			
			for(j=i+1;j<n;j++)
			{
				if(no[i] + no[j] == x)
				{
					
					l++;
					break;
				}
				
			}
		}
		if(l == 0)
		printf("No\n");
		else
		printf("Yes\n");
	}
	return 0;
}
