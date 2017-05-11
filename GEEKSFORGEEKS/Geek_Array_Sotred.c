//GeeksForGeeks Problem: Check If an Array is Sorted 
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[505],i,j,temp,a[505],count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
			a[i]=no[i];
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
		for(i=0;i<n;i++)
		{
			if(no[i]!=a[i])
			{
				count++;
				break;
			}
		}
		if(count==0)
		printf("1\n");
		else
		printf("0\n");
	}
	return 0;
}
