//CodeChef Problem : Banta Needs Help (LOCAPR17)
//Problem Code : SANBAN
//Author : Piyush
#include<stdio.h>
const unsigned int M = 1000000007;
int main()
{
	int t,no,sum,i,j,p,k;
	scanf("%d",&t);
	while(t--)
	{
		i=0;
		j=1;
		sum=1;
		scanf("%d",&no);
		if(no==1)
		printf("%d\n",sum);

		else
		{
			for(p=2;p<=no;p++)
			{
				k=i+j;
				sum = (sum + (p*k)) % M;
				i=j;
				j=k;
			}
			sum=sum%M;
			printf("%d\n",sum);
		}
	}
	return 0;
}

