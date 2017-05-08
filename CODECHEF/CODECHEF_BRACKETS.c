//CodeChef Problem:Brackets (Beginner)
//Problem Code : BRACKETS
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,bal,l,l1,l2,i;
	char str[100002];
	scanf("%d",&t);
	while(t--)
	{
		bal=0;
		l1=0;
		l2=0;
		scanf("%s",str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]=='(')
			bal++;
			else
			bal--;
			if(bal>l1)
			l1=bal;
		}
		l2=l1;
		while(l1--)
		{
			printf("(");
		}
		while(l2--)
		{
			printf(")");
		}
		printf("\n");
	}
	return 0;
}
