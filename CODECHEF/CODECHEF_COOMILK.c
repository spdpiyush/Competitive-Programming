//CodeChef Problem : Bear and Milky Cookies(Beginner)
//Problem Code : COOMILK
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,no[55],i,count;
	char str[10];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",str);
			if(strcmp(str,"cookie")==0)
			no[i]=1;
			else
			no[i]=0;	
		}
		count=0;
		for(i=0;i<n-1;i++)
		{
			if(no[i]==1 && no[i+1]==0)
			{
				count++;
			}
			else if(no[i]==0 && no[i+1]==0)
			{
				count++;
			}
			else if(no[i]==0 && no[i+1]==1)
			{
				if(no[i+1]==1 && no[i+2]==0)
				count++;
			}
			else
			{
				count=0;
				break;
			}
		}
		if(count==0)
		printf("NO\n");
		else
		printf("YES\n");
	}
	return 0;
}
