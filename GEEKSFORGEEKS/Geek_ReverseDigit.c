//GeeksforGeeks Problem : Reverse Digit
//Author : By PIYUSH
#include<stdio.h>
void rev(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		rev(no);
	}
	return 0;
}
void rev(int no)
{
	int r=0;
	while(no)
	{
		r=(r*10)+(no%10);
		no=no/10;
	}
	printf("%d\n",r);
}
