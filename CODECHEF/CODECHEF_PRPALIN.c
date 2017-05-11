//CodeChef Problem : Prime Palindromes(Peer)
//Problem Code:PRPALIN
//Author : Piyush
#include<stdio.h>
int rev(int);
int prime(int);
int main()
{
	int no,i,p,r;
	scanf("%d",&no);
	while(no<=1000000)
	{
		p=prime(no);
		r=rev(no);
		if(p==0  && r==0)
		{
			printf("%d\n",no);
			break;
		}
		no++;
	}
	return 0;
}
int prime(int no)
{
	int i;
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		return 1;
	}
	return 0;
}
int rev(int no)
{
	int re=0,p=no;
	while(no)
	{
		re=(re*10)+(no%10);
		no/=10;
	}
	if(re==p)
	return 0;
	else
	return 1;
}
