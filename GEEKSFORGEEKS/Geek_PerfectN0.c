#include<stdio.h>
int check(int);
int fact(int);
int main()
{
	int t,no,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		ans = check(no);
		if(no == ans)
		printf("Perfect\n");
		else
		printf("Not Perfect\n");
	}
	return 0;
}
int check(int no)
{
	int sum=0;
	while(no)
	{
		sum=sum + fact(no%10);
		no=no/10;
	}
	return sum;
}
int fact(int no)
{
	if(no == 0)
	return 1;
	else
	return no * fact(no-1);
}
