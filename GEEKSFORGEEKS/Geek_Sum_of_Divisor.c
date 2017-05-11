//GeeksForGeeks Problem : Sum of Divisors (Basic)
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,no,sum,i;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&no);
		for(i=1;i<no;i++)
		{
			if(no%i==0)
			sum+=i;
		}
		printf("%d\n",sum);
	}
	return 0;
}
