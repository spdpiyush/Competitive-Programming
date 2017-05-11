//GeeksForGeeks Problem : Multiply Array(School)
//Author : PIYUSH
#include<stdio.h>
int main()
{
	int t,n,no,i,mul;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		mul=1;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&no);
			mul=mul*no;
		}
		printf("%d\n",mul);
	}
	return 0;
}
