//CodeChef Problem : Puppy and Sum(Beginner)
//Problem Code : PPSUM
//Author : PIYUSH
#include<stdio.h>
int sum(int);
int main()
{
	int t,d,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&d,&n);
		for(i=1;i<=d;i++)
		{
			n=sum(n);
		}
		printf("%d\n",n);
	}
	return 0;
}
int sum(int no)
{
	if(no==0)
	return 0;
	else
	return no+sum(no-1);
}
