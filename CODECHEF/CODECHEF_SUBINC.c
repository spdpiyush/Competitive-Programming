//CodeChef Problem : Count Subarrays(Beginner)
//Problem Code : SUBINC
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[100002],i,j,temp,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[i]>no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		count=0;
		if(n==1)
		count=1;
		else
		{
			for(i=0;i<n-1;i++)
		    {
			for(j=i;j<=i+1;j++)
			  {
				if(no[j]>=no[i])
				count++;
			  } 
		    }
		}
		printf("%d\n",count);
	}
	return 0;
}
