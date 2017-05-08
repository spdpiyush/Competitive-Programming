//CODECHEF Problem : Cutting Recipes (Beginner)
//Problem Code : RECIPE
//Author : By PIYUSH
#include<stdio.h>
#include<stdlib.h>
void display(int *,int,int);
int main()
{
	int t,*ptr,*p,no,i,l,j;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		scanf("%d",&no);
		if(j==1)
		{
		ptr = (int *)malloc(no*sizeof(int));	
		}
		else
		{
			ptr = (int *)realloc(ptr,no*sizeof(int));
		}
		p=ptr;
	    for(i=1;i<=no;i++)
		{
			scanf("%d",ptr);
			if(i==1)
			{
				l=*ptr;
			}
			if(i>1)
			{
				if(*ptr<l)
				l=*ptr;
			}
			ptr++;
		}
		display(p,l,no);
		//free(ptr);
	}
	return 0;
}
void display(int *p,int l,int no)
{
	int count=0,i;
	int *q;
	q=p;
	for(i=1;i<=no;i++)
		{
			if(*p % l == 0)
			count++;
			p++;
		}
		if(count == no)
		{
			for(i=1;i<=no;i++)
			{
				printf("%d ",*q/l);
				q++;
			}
		}
		else
		{
			for(i=1;i<=no;i++)
			{
				printf("%d ",*q);
				q++;
			}
		}
	
}
