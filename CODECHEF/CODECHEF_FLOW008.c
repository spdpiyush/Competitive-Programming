//CODECHEF Problem : Servant. (Beginner)
//Problem Code : FLOW008
//Author : By PIYUSH.
#include<stdio.h>
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
	if(no<10)
	printf("What an obedient servant you are!");
	else
	printf("%d",-1);
}
