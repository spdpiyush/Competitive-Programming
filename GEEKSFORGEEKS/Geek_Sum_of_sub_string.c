//GeekForGeeks Problem : Sum of all substrings of a Number(Basic)
//Author : Piyush
#include<stdio.h>
int sum(char *);
int s=0;
int main()
{
	int t;
	char str[100008];
	scanf("%d",&t);
	while(t--)
	{
		s=0;
		scanf("%s",str);
		printf("%d\n",sum(str));
	}
	return 0;
}
int sum(char *p)
{
	char *q=p,*ptr=NULL;
	if(*p == NULL)
	return 0;
	else
	{ 
	  ptr=q;
	  while(*q != NULL)	
	  {
	  	s +=*q;
	  	q++;
	  }
	  return s + sum(++p);
	}
}
