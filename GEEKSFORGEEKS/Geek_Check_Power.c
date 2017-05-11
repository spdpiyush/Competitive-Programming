//GeeksForGeeks Problem : Check if a number is power of another number(School)
//Author : PIYUSH
#include<stdio.h>
int check(int,int);
int main()
{
	int t,x,y,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		c=check(x,y);
		if(c == -1)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
int check(int x,int y)
{
	if(y%x != 0)
	return -1;
	else if(y==0)
	return 0;
	else if(y%x == 0)
	return 0 + check(x,y/x);
	else
	return -1;
}
