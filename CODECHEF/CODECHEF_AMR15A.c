//CODECHEF Problem : MahaSena (Beginner)
//Problem Code : AMR15A
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int n,no=0,ne=0,s;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&s);
		if(s%2==0)
		ne++;
		else
		no++;
	}
	if(ne>no)
	printf("READY FOR BATTLE\n");
	else
	printf("NOT READY\n");
	return 0;
}
