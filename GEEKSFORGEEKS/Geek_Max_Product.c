//GeeksForGeeks Problem : Maximum Product Of Two Numbers(Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,no[55],i,j,temp,ans;
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
				if(no[i] < no[j])
				{
					temp=no[i];
					no[i]=no[j];
					no[j]=temp;
				}
			}
		}
		ans=no[0]*no[1];
		printf("%d\n",ans);
	}
	return 0;
}
