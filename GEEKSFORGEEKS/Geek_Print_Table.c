//GeeksForGeeks Problem : Print table (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		for(i=1;i<=10;i++)
		{
			printf("%lld ",no*i);
		}
		printf("\n");
	}
	return 0;
}
