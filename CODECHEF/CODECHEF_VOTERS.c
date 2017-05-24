//CodeChef Problem : Disprepancies in the Voter List (Easy)
//Problem Code : VOTERS
//Author : Piyush
#include<stdio.h>
int main()
{
	int n1,n2,n3,no[50000]={0},i,s,l,n,count;
	scanf("%d%d%d",&n1,&n2,&n3);
	count=0;
	scanf("%d",&n);
	s=n;
	l=n;
	for(i=2;i<=n1;i++)
	{
		scanf("%d",&n);
		if(n>l)
		l=n;
		if(n<s)
		s=n;
		++no[n-1];
	}
	for(i=1;i<=n2;i++)
	{
		scanf("%d",&n);
		if(n>l)
		l=n;
		if(n<s)
		s=n;
		++no[n-1];
	}
	for(i=1;i<=n3;i++)
	{
		scanf("%d",&n);
		if(n>l)
		l=n;
		if(n<s)
		s=n;
		++no[n-1];
	}
	for(i=s-1;i<=l-1;i++)
	{
		if(no[i]>=2)
		count++;
	}
	printf("%d\n",count);
	for(i=s-1;i<=l-1;i++)
	{
		if(no[i]>=2)
		printf("%d\n",i+1);
	}
	printf("\n");
	return 0;
}
