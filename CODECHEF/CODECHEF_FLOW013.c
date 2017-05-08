//CODECHEF Problem : Valid Triangles.
//Problem Code : FLOW013
//Author : By PIYUSH.
#include<stdio.h>
void check(int,int,int);
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		check(a,b,c);
	}
	return 0;
}
void check(int a,int b,int c)
{
	if(a>0 && b>0 && c>0)
	{
		if(a+b+c==180)
		printf("YES\n");
		else
		printf("NO\n");
	}
	else
	printf("NO\n");
}
