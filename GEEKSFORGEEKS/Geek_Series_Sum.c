#include<stdio.h>
int sum(int);
int main()
{
	int n;
	scanf("%d",&n);
	printf("Sum of Series = %d",sum(n));
	return 0;
}
int sum(int no)
{
	if(no==0)
	return 0;

	return no+sum(no-1);
	
}
