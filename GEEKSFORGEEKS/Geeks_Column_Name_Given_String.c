//GeeksForGeeks Problem : Column name from  a given column number(Easy)
//Author : Piyush
#include<stdio.h>
int main()
{
    int t,no,l,i,p;
	char str[20],str1[]={'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
	scanf("%d",&t);
	while(t--)
	{
		l=0;
		i=0;
		scanf("%d",&no);
		while(no)
		{
			p=no%26;
			str[i]=str1[p];
			no/=26;
			l++;
			i++;
		}
		str[l]='\0';
		i=0;
		for(i=l-1;i>=0;i--)
		{
			printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}
