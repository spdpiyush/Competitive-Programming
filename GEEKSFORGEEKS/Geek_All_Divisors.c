//GeeksForGeeks Problem : All Divisors of a Natural Number (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			if(no%i==0)
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
