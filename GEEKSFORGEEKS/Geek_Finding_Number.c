//GeeksForGeeks Problem : Finding the numbers(Easy)
//Author : PIYUSH
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,j,count,a[2],k;
    int *p,*ptr,*p1,*p2,n;
	scanf("%d",&t);
	while(t--)
	{
		k=0;
		scanf("%d",&n);
		p=(int *)malloc(2*n*sizeof(int)+2);
		p1=p;
		p2=p;
		for(i=1;i<=(2*n + 2);i++)
		{
			scanf("%d",p);
			p++;
		}
		k=0;
		for(i=1;i<=(2*n + 2);i++)
		{
			ptr=p2;
			count=0;
			for(j=1;j<=(2*n + 2);j++)
			{
				
				if(*p1 == *ptr)
				{
					count++;
				}
				ptr++;
			}
			if(count%2!=0)
			{
				a[k]=*p1;
				k++;
			}
			p1++;
		}
		if(a[0]>a[1])
		printf("%d%d\n",a[1],a[0]);
		else
		printf("%d%d\n",a[0],a[1]);
	}
	return 0;
}
