//GeeksForGeeks Problem : Reverse Array in Groups(School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[505],k,i,j,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		scanf("%d",&k);
		for(i=0;i<k-1;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(no[i]<no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		for(i=k;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(no[i]<no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",no[i]);
		}
	}
	return 0;
}
