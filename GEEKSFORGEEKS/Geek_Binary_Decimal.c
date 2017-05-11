//GeeksForGeeks Problem : Binary Number to Decimal Number ( School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,sum,j,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		sum=0;
		i=1;
		while(no)
		{
			j = no % 10;
			sum=sum+(j*i);
			i = i*2;
			no=no/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}
