//GeeksForGeeks Problem : Minimum Sum of Alternate Product (Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[102],i,j,sum,temp;
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
		sum=0;
		for(i=0,j=n-1;i<(n/2);i++,j--)
		{
			sum=sum+(no[i]*no[j]);
		}
		printf("%d\n",sum);
	}
	return 0;
}

