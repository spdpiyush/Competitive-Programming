//GeeksForGeeks Problem : Celsius to Fahrenheit (School)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,temp;
	double te;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&temp);
		te=1.8 * temp;
		te=te+32;
		printf("%d\n",(int)te);
	}
	return 0;
}
