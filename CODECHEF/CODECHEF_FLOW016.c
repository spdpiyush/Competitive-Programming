//CODECHEF Problem : GCD and LCM (Beginner)
//Problem Code : FLOW0016
//Author : By PIYUSH.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int gcd(int,int);
void lcm(int,int);
int main()
{
	int t,a,b,n1,n2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		n1=a;
		n2=b;
		printf("%d",gcd(a,b));
		lcm(n1,n2);
	}
	return 0;
}
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
void lcm(int a,int b)
{
	int i,no,la=1;
	while((a%2==0 && b%2==0) || (a%3==0 && b%3==0))
	{
		if(a%2==0 && b%2==0)
		{
			a=a/2;
			b=b/2;
			la=la*2;
		}
		else if(a%3==0 && b%3==0)
		{
			a=a/3;
			b=b/3;
			la=la*3;
		}	
	}
	la = la * a * b;
	printf(" %d\n",la);
}
