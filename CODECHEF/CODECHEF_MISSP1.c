//CODECHEF Problem : Chef And Dolls (Beginner)
//Problem Code : MISSP
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int t,n,no[100005],i,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		for(i=0;i<n;i++)
		{
			count=0;
			if(no[i]==0)
			continue;
			for(j=i+1;j<n;j++)
			{
				if(no[i]==no[j])
				{
					count++;
					no[j]=0;
				}
			}
			if(count == 0)
			{
				printf("%d\n",no[i]);
				break;
			}
		}
	}
	return 0;
}
