//CODECHEF Problem : Chef and Operators.(Beginner)
//Problem Code : CHOPRT
//Author : By PIYUSH.
#include<stdio.h>
void disp(int,int);
int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		disp(a,b);
	}
	return 0;
}
void disp(int a,int b)
{
	if(a>b)
	printf(">\n");
	else if(a<b)
	printf("<\n");
	else
	printf("=\n");
}
