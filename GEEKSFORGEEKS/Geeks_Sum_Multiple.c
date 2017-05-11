//GeeksForGeeks Problem : Sum Of Digits Multiple (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,sum,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		j=no;
		sum=0;
		while(no)
		{
			sum =  sum + (no%10);
			no = no/10;
		}
		printf("%d",sum);
		if(sum%j == 0)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
