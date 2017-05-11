/*
 ---------The Program to Print-----------
 -------Upto N Numbers without ---------
 ----------Using Semicolon------------*/
/*#include<stdio.h>
#define N 10
int main(int num)
{
	if(num <= N && printf("%d ",num) && main(num+1))
	{
	}
}*/
#include<stdio.h>
#define N 10
int main(int num,char *argv[])
{
	while(num<=N && printf("%d ",num) && num++)
	{
	}
}
