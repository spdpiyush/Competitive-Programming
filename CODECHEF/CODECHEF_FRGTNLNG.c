//CodeChef Problem : ForGotten Language (Beginner)
//Problem Code : FRGTNLNG
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
void check(char *,int);
int no[100];
struct word
{
	char str[6];
}w[100];
int main()
{
	int t,n,k,i,j,l;
	char a[6];
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<100;i++)
		{
			no[i]=0;
		}
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%s",w[i].str);
		}
		for(i=1;i<=k;i++)
		{
			scanf("%d",&l);
			for(j=1;j<=l;j++)
			{
				scanf("%s",a);
				check(a,n);
			}	
		}
		for(i=0;i<n;i++)
		{
			if(no[i]==0)
			printf("NO ");
			else
			printf("YES ");
		}
		printf("\n");
	}
	return 0;
}
void check(char *s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(s,w[i].str)==0)
		{
			no[i]=1;
		}
	}
}
