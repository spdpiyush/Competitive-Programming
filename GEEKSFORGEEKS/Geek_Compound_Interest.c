//GeeksForGeeks Problem : Compound Interest (School)
//Author : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int te,p,t,n,r,i,in;
	int a;
	double d;
	scanf("%d",&te);
	while(te--)
	{
		a=0;
		scanf("%d%d%d%d",&p,&t,&n,&r);
		for(i=1;i<=t;i++)
		{
			in=(r*p)/100;
			a=a+in;
			p=in;
		}
		printf("%d\n",a);
	}
	return 0;
}
