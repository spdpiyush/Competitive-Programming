//GeeksForGeeks Problem : Sum Of Digits Divisibility(Basic)
//Auhtor : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,sum=0,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		sum=0;
		while(no)
		{
			sum=sum+(no%10);
			no=no/10;
		}
		if(no%sum==0)
		printf("1\n");
		else
		printf("0\n");
	}
	return 0;
}
