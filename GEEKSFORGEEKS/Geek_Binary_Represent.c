//GeeksForGeeks Problem : Binary Representation (School)
//Author :  By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,bin[14],rev[15],j,k;
	static int i;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<14;i++)
		{
			bin[i]=0;
		}
		scanf("%d",&no);
		i=0;
		while(no != 1)
		{
			rev[i]=no%2;
			no=no/2;
			i++;
		}
		rev[i]=1;
		k=0;
		j=13;
		while(k != i)
		{
			bin[j]=rev[k];
			j--;
			k++;
		}
		for(i=0;i<14;i++)
		{
			printf("%d",bin[i]);
		}
		printf("\n");
	}
	return 0;
}
