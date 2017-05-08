#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,j,m,temp;
	int *ptr,*p,*q,*r;
	scanf("%d",&t);
	m=t;
	ptr=(int *)malloc(t*sizeof(int));
	p=ptr;
	q=ptr;
	while(t--)
	{
		scanf("%d",ptr);
		ptr++;
	}
	for(i=1;i<=m-1;i++)
	{
		j=m;
		r=ptr;
		while(j>1)
		{
				if(*p > *r)
            	{  
		          temp = *p;
		          *p = *r;
		          *r = temp;
	            } 
			r--;
			j--;
		}
		p++;
	}
	for(i=1;i<=m;i++)
	{
		printf("%d\n",*q);
	}
	return 0;
}
