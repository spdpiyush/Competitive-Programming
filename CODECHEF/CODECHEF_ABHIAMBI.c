//CodeChef Problem : Abhi and Ambi Play a Game(LOCAPR17)
//Problem Code : ABHIAMBI
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,n,a,i,ab,total;
	scanf("%d",&t);
	while(t--)
	{
		total=0;
		scanf("%d%d",&n,&a);
		for(i=1;i<=n;i++)
		{
			total=total + a;
		}
		i=1;
		while(a && total)
		{
			if(i%2==0)
			ab=0;
			else
			ab=1;
			total -= a;
			i++;
			a--;
		}
		if(ab==1)
		printf("Abhi\n");
		else
		printf("Ambi\n");
	}
	return 0;
}

