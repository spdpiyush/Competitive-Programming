//CODECHEF Problem : Finding Square Roots.(Beginner)
//Problem Code : FSQRT
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
void disp(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		disp(no);
		printf("\n");
	}
	return 0;
}
void disp(int no)
{
	no=sqrt(no);
	printf("%d",no);
}
