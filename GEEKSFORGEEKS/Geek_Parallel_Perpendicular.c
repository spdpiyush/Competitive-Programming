//GeeksForGeeks Problem : Parallel or Perpendicular (School)
//Auhtor : By PIYUSH
#include<stdio.h>
int main()
{
	int t,a1,a2,a3,b1,b2,b3;
	int d,c1,c2,c3,a,b,c,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a1,&a2,&a3);
		scanf("%d%d%d",&b1,&b2,&b3);
		d=(a1*b1)+(a2*b2)+(a3*b3);
		c1=(a2*b3)-(a3*b2);
		c2=(a1*b3)-(b1*a3);
		c3=(a1*b2)-(a2*b1);
		a=(a1*a1)+(a2*a2)+(a3*a3);
		b=(b1*b1)+(b2*b2)+(b3*b3);
		c=(c1*c1)+(c2*c2)+(c3*c3);
		if(c==0)
		printf("1\n");
		else if(d==0)
		printf("2\n");
		else
		printf("0\n");
	}
	return 0;
}
