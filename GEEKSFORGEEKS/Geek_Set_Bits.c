//GeeksForGeeks Problem : Set Bits(Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,no,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&no);
		while(no)
		{
			if(no%2==1)
			count++;
			no=no/2;
		}
		printf("%d\n",count);
	}
	return 0;
}
