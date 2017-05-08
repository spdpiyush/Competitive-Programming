//CODECHEF Problem : The Block Game.(Beginner)
//Problem Code : PALL01
//Author : By PIYUSH.
#include<stdio.h>
void pal(int);
int main()
{
	int no,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		pal(no);
	}
	return 0;
}
void pal(int no)
{
	int rev=0,j;
	j=no;
	while(no)
	{
		rev=(rev*10)+no%10;
		no=no/10;
	}
	if(rev==j)
	printf("wins\n");
	else
	printf("losses\n");
}
