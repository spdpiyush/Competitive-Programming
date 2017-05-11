//GeeksForGeeks Problem : Sum Of Primes(Basic)
//Author : By PIYUSH
#include<stdio.h>
int prime(int);
int main()
{
	int t,no,sum,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		sum=0;
		while(no)
		{
			j=no%10;
			sum=sum+prime(j);
			no=no/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}
int prime(int no)
{
	int i,x=0;
	if(no==1)
	x++;
	for(i=2;i<=(no/2);i++)
	{
		if(no%i == 0)
		{
			x++;
			break;
		}
	}
	if(x==0)
	return no;
	else
	return 0;
}
