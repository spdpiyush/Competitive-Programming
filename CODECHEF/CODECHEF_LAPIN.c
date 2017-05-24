//CodeChef Problems: Lapindromes (Easy)
//Problem Code : LAPIN
//Author : Piyush
#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,l1,no[150],no1[150],i,count;
	char str[1002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		if(l%2!=0)
		l1=(l/2)+1;
		else
		l1=(l/2);
		for(i=97;i<=122;i++)
		{
			no[i]=0;
			no1[i]=0;
		}
		for(i=0;i<l/2;i++)
		{
			++no[str[i]];
		}
		for(i=l1;i<l;i++)
		{
			++no1[str[i]];
		}
		count=0;
		for(i=97;i<=122;i++)
		{
			if(no[i]!=no1[i])
			{
				count++;
				break;
			}
		}
		if(count!=0)
		printf("No\n");
		else
		printf("Yes\n");
	}
	return 0;
}
