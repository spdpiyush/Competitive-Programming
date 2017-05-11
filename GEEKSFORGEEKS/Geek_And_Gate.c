//GeeksForGeeks Problem : The AND Gate(Basic)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&no);
			if(no==0)
			count++;
		}
		if(count>0)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
