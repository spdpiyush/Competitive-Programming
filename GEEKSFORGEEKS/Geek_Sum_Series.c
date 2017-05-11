//GeeksForGeeks Problem : Sum Of Series (Basic)
//Author : By PIYUSH
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
	if(no==1)
	return 1;
	else
	return no + sum(no-1);
}
