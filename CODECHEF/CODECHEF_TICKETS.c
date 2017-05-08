//CodeChef Problem : Tickets(Basic)
//Problem Code : TICKETS
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,count,l,j;
	char str[102];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		count=0;
		if(str[0]==str[1])
		printf("NO\n");
		else
		{
			for(i=0;i+2<l;i++)
			{
				if(str[i]!=str[i+2])
				{
				count=-1;
				break;
				}
			}
			if(count==-1)
			printf("NO\n");
			else
			printf("YES\n");
		}
	}
	return 0;
}
