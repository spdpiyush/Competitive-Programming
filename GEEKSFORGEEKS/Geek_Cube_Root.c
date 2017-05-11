//GeeksForGeeks Problem : Cube Root Of a Number ( School)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		printf("%d\n",(int)cbrt(no));
	}
	return 0;
}
