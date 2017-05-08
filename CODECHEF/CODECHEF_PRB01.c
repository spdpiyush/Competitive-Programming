//CODECHEF Problem : Primality Test.(Beginner)
//Problem Code : PRB01
//Author : By PIYUSH.
#include<stdio.h>
void prime(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		prime(no);
	}
	return 0;
}
void prime(int no)
{
	int i,count=0;
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		count++;
	}
	if(count>0 || no==1)
	printf("no\n");
	else
	printf("yes\n");
}
