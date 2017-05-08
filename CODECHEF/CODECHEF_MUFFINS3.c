//CODECHEF Problem : Packaging Cupcakes (Beginner)
//Problem Code : MUFFINS3
//Author : By PIYUSH.
#include<stdio.h>
int main()
{
	int t,no,i,le,pack,left;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		i=1;
		left=no%i;
		pack=i;
		i++;
		while(i<=no)
		{
			le=no%i;
			if(le>=left)
			{
			pack=i;
			left=le;
			}
			i++;
		}
		printf("%d\n",pack);
	}
	return 0;
}
