//CODECHEF Problem : Ciel and A-B Problem.(Beginner)
//Problem  Code :CIELAB
//Author : By PIYUSH.
#include<stdio.h>
int disp(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",disp(a,b));
	return 0;
}
int disp(int a,int b)
{
	int ans,i;
	ans=a-b;
	i=ans%10;
	if(i<9)
	ans=ans+1;
	else
	ans=ans-1;
	return ans;
}
