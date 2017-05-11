//GeeksForGeeks Problem : Number Of Divisors (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,count,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		count=0;
		for(i=1;i<=no;i++)
		{
			if(no%i==0)
			{
				if(i%3==0)
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
