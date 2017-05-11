//GeeksForGeeks Problem : Repeated Sum of Digits (School)
//Author : By PIYUSH
#include<stdio.h>
int sum(int);
int disp(int);
int add;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		add=0;
		scanf("%d",&n);
		printf("%d\n", disp(n));
	}
	return 0;
}
int disp(int no)
{
	if(no/10 == 0)
	return no;
	else
	return sum(no);
}
int sum(int no)
{
	while(no)
	{
		add = add +(no%10);
		no=no/10;
	}
	if(add > 9)
	return add + sum(add);
	else
	return add;
}
