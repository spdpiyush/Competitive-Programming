//GeeksForGeeks Problem : Count possible Triangles (Basic)
//Author : By PIYUSH
#include<stdio.h>

int main()
{
	int t,n,no[105],i,j,k,temp;
	int count;
	
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
		for(i=0;i<n-2;i++)
		{
			
			for(j=i+1;j<n-1;j++)
			{
				
				for(k=j+1;k<n;k++)
				{
				
				  if((no[i]+no[j])>no[k])
				  count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
