//GeeksForGeeks Problem : Search in a Rotated Array(Easy)
//Author : PIYUSH
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,*p,*ptr,count,k,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ptr=(int *)malloc(n*sizeof(int));
		p=ptr;
		for(i=1;i<=n;i++)
		{
			scanf("%d",p);
			p++;
		}
		scanf("%d",&k);
		count=-1;
		for(i=1;i<=n;i++)
		{
			if(*ptr == k)
			{
				count=i-1;
				break;
			}
			ptr++;
		}
		printf("%d\n",count);
		free(ptr);		
	}
	return 0;
}
