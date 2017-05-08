//CODECHEF Problem : Snape And Ladder (Beginner)
//Problem Code : SNAPE
//AUthor : By PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,b,ls;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&b,&ls);
		if(ls>b)
		printf("%f",sqrt(ls*ls-b*b));
		else if(b>ls)
		printf("%f",sqrt(b*b-ls*ls));
		else
		printf("%f",b);
		printf(" %f\n",sqrt(b*b+ls*ls));
	}
	return 0;
}
