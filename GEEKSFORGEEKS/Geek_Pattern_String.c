//GeeksForGeeks Problem : Pattern of Strings.(School)
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,l;
	char str[5];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=5;
		for(i=1;i<=5;i++)
		{
			for(j=0;j<l;j++)
			{
				printf("%c",str[j]);
			}
			printf("\n");
			l=l-1;
		}
		
	}
	return 0;
}
