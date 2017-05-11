//GeeksForGeeks Problem : Swap two nibbles in a Byte(Basic)
//Author : Piyush
#include<stdio.h>
#include<math.h>
int main()
{
	int t,no,ar[8],i,temp,sum,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		for(i=0;i<8;i++)
		{
			ar[i]=0;
		}
		i=7;
		while(no)
		{
			ar[i] = no%2;
			no = no/2;
			i--;
		}
		i=0;
		j=4;
		for(k=1;k<=4;k++)
		{
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
			i++;
			j++;
		}
		sum=0;
		j=1;
		for(i=7;i>=0;i--)
		{
			if(ar[i] == 0)
			sum+=0;
			else
			sum+=j;
			j=j*2;
		}
		printf("%d\n",sum);
	}
	return 0;
}
