//CodeChef Problem : Decision Review System(LOCAPR17)
//Problem Code : DRS
//Author : Piysuh
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,rev,n,count,i,j,p;
	float no,rev_c;
	scanf("%d",&t);
	while(t--)
	{
		rev=2;
		rev_c=79.6;
		count=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%f",&no);
			if(no>399.6 && no>rev_c)
			{
				rev=2;
				rev_c=479.6;
			}
			else if(no>319.6 && no>rev_c)
			{
				rev=2;
				rev_c=399.6;
			}
			else if(no>239.6 && no>rev_c)
			{
				rev=2;
				rev_c=319.6;
			}
			else  if(no>159.6 && no>rev_c)
			{
				rev=2;
				rev_c=239.6;
			}
			else if(no>79.6 && no>rev_c)
			{
				rev=2;
				rev_c=159.6;
			}
			
				if(rev)
				{
					rev--;
					count++;
				}

		}
		printf("%d\n",count);
	}
	return 0;
}
