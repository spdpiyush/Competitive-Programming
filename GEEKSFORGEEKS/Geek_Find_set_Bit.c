//GeeksForGeeks Problem : Find Position of Set bit(Basic)
//Author : PIYUSH
#include<stdio.h>
int check(int);
int count,pos;
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&no);
		printf("%d\n",check(no));
	}
	return 0;
}
int check(int no)
{
	int i=1;
	while(no)
	{
		if(no%2 == 1)
		{
			count++;
			pos=i;
		}
		if(count>1)
		{
			pos=-1;
			break;
		}
		no=no/2;
		i++;
	}
	return pos;
}
