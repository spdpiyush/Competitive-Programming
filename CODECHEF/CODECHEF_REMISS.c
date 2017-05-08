//CODECHEF Problem : Chef And Remissness (Beginner)
//Problem Code : REMISS
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		if(a>b)
		printf("%d",a);
		else
		printf("%d",b);
		printf(" %d\n",a+b);
	}
	return 0;
}
