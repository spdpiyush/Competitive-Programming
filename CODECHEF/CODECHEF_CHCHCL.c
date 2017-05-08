//CodeChef Problem : Chef and Choclate (Beginer)
//Problem Code : CHCHCL
//Author : PIYUSH
#include<stdio.h>
int check(int,int);
int main()
{
	int t,n,m,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		count=n*m;
		if(count%2==0)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}

