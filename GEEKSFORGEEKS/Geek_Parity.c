//GeeksForGeeks Problem : Parity of Unsigned Integer.(School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		p=0;
		while(no!=0)
		{
			no=no & (no-1);
			p++;
		}
		if(p%2==0)
		printf("even\n");
		else
		printf("odd\n");
	}
	return 0;
}
