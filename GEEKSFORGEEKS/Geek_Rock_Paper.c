//GeeksForGeeks Problem : Rock Paper Scissors (Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	char a[3];
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%s",a);
		if(a[0] == a[1])
		printf("DRAW\n");
		else if(a[0]=='P' && a[1]=='R')
		printf("A\n");
		else if(a[0]=='R' && a[1]=='P')
		printf("B\n");
		else if(a[0]=='S' && a[1]=='P')
		printf("A\n");
		else if(a[0]=='P' && a[1]=='S')
		printf("B\n");
		else if(a[0]=='R' && a[1]=='S')
		printf("A\n");
		else if(a[0]=='S' && a[1]=='R')
		printf("B\n");
	}
	return 0;
}
