//CODECHEF Problem : Greedy Puppy.(Beginner)
//Problem Code : GDOG
//Author : By PIYUSH.
#include<stdio.h>
int coin(int,int);
int main()
{
	int t,n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		printf("%d\n",coin(n,k));
	}
	return 0;
}
int coin(int n,int k)
{
	int i,ans=0;
	for(i=2;i<=k;i++)
	{
		if((n%i)>ans)
		{
			ans=n%i;
		}
	}
	return ans;
}
