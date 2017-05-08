//CodeChef Problem : Gregorian Calender (Beginner)
//Problem Code : FLOW015
//Author : PIYUSH
#include<stdio.h>
#include<stdlib.h>
int leap(int);
int prev(int);
int next(int);
int main()
{
	int t,y,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&y);
		if(y>2001)
		{
			c=next(y);
			c=c%7;
		}
		else
		{
			c=prev(y);
			c=c/7;
		}
		
		if(c==1)
		printf("monday\n");
		else if(c==2)
		printf("tuesday\n");
		else if(c==3)
		printf("wednesday\n");
		else if(c==4)
		printf("thrusday\n");
		else if(c==5)
		printf("friday\n");
		else if(c==6)
		printf("saturday\n");
		else
		printf("sunday\n");
	}
	return 0;
}
int leap(int y)
{
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			return 1;
			else
			return 0;
		}
		else
		return 1;
	}
	else
	return 0;
}
int next(int y)
{
	if(y == 2001)
	return 1;
	else
	{
	    if(leap(y)==1)
		return 2+next(--y);
		else
		return 1+next(--y);
	}
}
int prev(int  y)
{
	if(y == 2001)
	return 1;
	else
	{
		if(leap(y)==1)
		return 2+prev(++y);
		else
		return 1+prev(++y);
	}
}

