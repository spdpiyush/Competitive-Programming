//CodeChef Problem : Simple Statistics (Beginner)
//Problem Code : SIMPSTAT
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,k,no[10002],i,j,s,temp,sum;
	float avg;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
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
		s=k;
		i=0;
		j=n-1;
		while(k--)
		{
			no[i]=0;
			no[j]=0;
			i++;
			j--;
		}
		sum=0;
		for(i=0;i<n;i++)
		{
			sum=sum+no[i];
		}
		n=n - (2*s);
		avg = (float)sum/n;
		printf("%.6f\n",avg);
	}
	return 0;
}
