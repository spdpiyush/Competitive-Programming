//CODECHEF Problem : Sum Of Palindromic Numbers (Beginner)
//Problem Code : SPALNUM
//Author :By PIYUSH.
#include<stdio.h>
void disp(int,int);
int pal(int);
int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		disp(a,b);
	}
	return 0;
}
void disp(int a,int b)
{
	int sum=0,i;
	for(i=a;i<=b;i++)
	{
		sum=sum+pal(i);
	}
	printf("%d\n",sum);
}
int pal(int no)
{
	int rev=0,i;
	i=no;
	while(no)
	{
		rev=(rev*10)+(no%10);
		no=no/10;
	}
	if(rev==i)
	return i;
	else
	return 0;
}
