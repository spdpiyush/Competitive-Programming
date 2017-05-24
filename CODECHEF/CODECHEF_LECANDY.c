//CodeChef Problem : Little Elephant and Candy(Peer)
//Problem Code : LECANDY
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,c,no,i,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&c);
		while(n--)
		{
			scanf("%d",&no);
			c=c-no;
		}
		if(c>=0)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
