//GeeksForGeeks Problem : Column name from  a given column number(Easy)
//Author : Piyush
#include<stdio.h>
#include<string.h>
int main()
{
	int t,no,l,i;
	char str[10],str1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&t);
	while(t--)
	{
		l=0;
		i=0;
		scanf("%d",&no);
		while(no)
		{
			str[i]=str1[no%26];
			no/=26;
			l++;
			i++;
		}
		str[l]='\0';
		strev(str);
		printf("%s\n",str);
	}
	return 0;
}
