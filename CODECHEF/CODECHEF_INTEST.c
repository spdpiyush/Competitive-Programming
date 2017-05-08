//CodeChef Problem : Beginner (Enormus Input Test)
//Problem Code : INTEST
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int a,b,count=0;
	long long int no;
	scanf("%d%d",&a,&b);
	while(a--)
	{
		scanf("%lld",&no);
		if(no%b==0)
		count++;
	}
	printf("%d",count);
	return 0;
}
