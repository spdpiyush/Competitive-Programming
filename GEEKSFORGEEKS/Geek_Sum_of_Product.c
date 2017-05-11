//GeeksForGeeks Problem : Minimize the Sum of Product(Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,a[53],b[52],i,j,sum,temp;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		  scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			sum=sum+(a[i] * b[i]);
		}
		printf("%d\n",sum);
	}
	return 0;
}
