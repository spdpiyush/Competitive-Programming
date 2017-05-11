//GeeksForGeeks Problem : Print 1 to n Without Using Loops
//Author : By PIYUSH
#include<stdio.h>
int i=1;
void disp(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		disp(no);
		printf("\n");
		i=1;
	}
	return 0;
}
void disp(int no)
{
	
	if(i>no && no==0)
	return ;
	else
	{
		printf("%d ",i);
		i++;
		no--;
		disp(no);
	}
}
