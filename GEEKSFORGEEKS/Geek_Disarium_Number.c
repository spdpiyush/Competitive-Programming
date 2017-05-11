//GeeksForGeeks Problem : Disarium Number (Basic)
//Author : Piyush
#include<stdio.h>
#include<math.h>
void check(int);
int count=0;
int main()
{
	int t,no,s;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&no);
		s=no;
		while(no)
		{
			count++;
			no=no/10;
		}
		check(s);
	}
	return 0;
}
void check(int no)
{
	int s=no,sum=0,p;
	while(s)
	{
		p=(s%10);
		sum+=pow(p,count);
		count--;
		s=s/10;
	}
	if(sum == no)
	printf("1\n");
	else
	printf("0\n");
}
