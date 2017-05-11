//GeeksForGeeks Problem : Inversion af Array (Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,no[101],i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[i]>no[j])
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
