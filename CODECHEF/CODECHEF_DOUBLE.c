//CodeChef Problem : Double Strings (Peer)
//Problem Code : DOUBLE
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==0)
		printf("%d\n",n);
		else
		printf("%d\n",n-1);
	}
	return 0;
}
