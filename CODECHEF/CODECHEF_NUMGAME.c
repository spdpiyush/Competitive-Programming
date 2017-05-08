//CodeChef Problem : Yet Another Number (Peer)
//Problem Code : NUMGAME
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,b,i;
	scanf("%d",&t);
	while(t--)
	{
		b=0;
		scanf("%d",&n);
		while(n!=1)
		{
			n--;
			b++;
		}
		if(b%2==0)
		printf("BOB\n");
		else
		printf("ALICE\n");
	}
	return 0;
}
