//GeeksForGeeks Problem : Generate Binary Number (Basic)
//Author : Piyush
#include<stdio.h>
void bin(int);
int a[9];
int main()
{
	int t,no,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			bin(i);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
void bin(int no)
{
	int count=0,i,j;
	for(i=0;i<9;i++)
	{
		a[i]=0;
	}
	j=8;
	while(no)
	{
		a[j]=no%2;
		no=no/2;
		j--;
		count++;
	}
	for(i=9-count;i<9;i++)
	{
		printf("%d",a[i]);
	}
}
