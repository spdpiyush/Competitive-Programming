//CODECHEF Problem : Ambiguous Permutations (Beginner)
//Problem Code : PERMUT2
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int n,a[100001],b[100001],i,count;
	while(1)
	{
		count=0;
		scanf("%d",&n);
		if(n==0)
	
		{
			break;
		}
		for(i=0;i<=n;i++)
		{
			a[i]=b[i]=0;
		}
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]]=i;
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]!=b[i])
			count++;
		}
		if(count>0)
		printf("not ambiguous\n");
		else
		printf("ambiguous\n");
	}
	return 0;
}
