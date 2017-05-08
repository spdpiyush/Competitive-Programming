//CODECHEF Problem : Ciel and Receipt (Beginner)
//Problem Code : CIELRCPT
//Author : By PIYUSH.
#include<stdio.h>
#include<math.h>
int  main()
{
	int t,no,i,count,po;
	scanf("%d",&t);
	while(t--)
	{
		i=11;
		count=0;
		scanf("%d",&no);
		while(no>0)
		{
			po=pow(2,i);
			count=count+(no/po);
			if(no%po==0)
			{
				break;
			}
			else if(no/po!=0)
			{
			 no=no%i;	
			}
			i--;	
		}
		printf("%d\n",count);
	}
	return 0;
}
