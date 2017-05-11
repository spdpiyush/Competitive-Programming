//GeeksForGeeks Problem : Sum of Digits (Basic)
//Author : Piyush
#include<stdio.h>
int sum(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		printf("%d\n",sum(no));
	}
	return 0;
}
int sum(int no)
{
	int s;
	if(no>=1 && no<=9)
	return no;
	else
	{
		s=0;
		while(no)
		{
			s=s+(no%10);
			no=no/10;
		}
	}
	return sum(s);
}
