//GeeksForGeeks Problem : Surface Area and Volume of Cuboid (School)
//Author : PIYUSH
#include<stdio.h>
int tsa(int,int,int);
int vol(int,int,int);
int main()
{
	int t,l,b,h;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&l,&b,&h);
		printf("%d",tsa(l,b,h));
		printf(" %d\n",vol(l,b,h));
	}
	return 0;
}
int tsa(int l,int b,int h)
{
	return 2*((l*b)+(b*h)+(h*l));
}
int vol(int l,int b,int h)
{
	return (l*b*h);
}
