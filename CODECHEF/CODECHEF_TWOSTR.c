//CODECHEF Problem :Chef and Wildcard Matching.(Beginner)
//Problem Code : TWOSTR
//Author : By PIYUSH.
#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	int t,i,l;
	char a[MAX],b[MAX];
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%s",a);
		scanf("%s",b);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='?' || b[i]=='?')
			continue;
			else if(a[i]==b[i])
			continue;
			else
			printf("No\n");
			break;
		}
		if(i==l)
		printf("Yes\n");
	}
	return 0;
}
