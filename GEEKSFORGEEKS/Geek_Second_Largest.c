//GeeksForGeeks Problem : Second Largest (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[505],i,j,temp;
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
				if(no[i]<no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		printf("%d\n",no[1]);
	}
	return 0;
}
