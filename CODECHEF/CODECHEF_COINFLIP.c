//CodeChef Problem : Coin Flip (Easy)
//Problem Code :COINFLIP
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,g,n,i,q,sum_h,sum_t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&g);
		while(g--)
		{
			scanf("%d%d%d",&i,&n,&q);
			sum_h=0;
			sum_t=0;
			if(i==1)
			{
				sum_h=n;
				sum_t=0;
				for(i=1;i<=n;i=i+2)
				{
					
						sum_t++;
						sum_h--;
						
				}
			}
			else
			{
				sum_h=0;
				sum_t=n;
				for(i=1;i<=n;i=i+2)
				{
						sum_t--;
						sum_h++;
				}
			}
			if(q==1)
			printf("%d\n",sum_h);
			else
			printf("%d\n",sum_t);
		}
	}
	return 0;
}
