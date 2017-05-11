//GeeksForGeeks Problem : Value Equal To Index Value (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no[55],i,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&no[i]);
		}
		count=0;
		for(i=0;i<n;i++)
		{
			if(no[i] == i+1)
			{
				printf("%d ",no[i]);
				count++;
			}
		}
		if(count==0)
		printf("Not Found");
		printf("\n");
	}
	return 0;
}
