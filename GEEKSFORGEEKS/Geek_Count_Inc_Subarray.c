//GeeksForGeeks Problem : Count increasing subarray (Basic)
//Problem Code : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[1002],i,j,count,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		count=0;
		for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
			{
				if(no[j]>no[k])
				{
					count++;
					k=j;
				}
				else
				break;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
