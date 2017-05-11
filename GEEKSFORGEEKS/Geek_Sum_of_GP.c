//GeeksForGeeks Problem : Sum of GP (School)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,a,r,n;
	double sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d%d",&a,&r);
		if(r==1)
		sum=n*a;
		else
		{
		sum=((pow(r,n)-1))/(r-1);
		sum=sum*a;
		
		}
	printf("%lf\n",sum);
	}
	return 0;
}
