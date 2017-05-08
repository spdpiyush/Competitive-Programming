//CODECHEF Problem : Faded Palindromes 
//Problem Code : LEXOPAL
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l;
	char str[12347],str1[12347];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&str);
		l=strlen(str);
		for(i=l-1;i>=0;i--)
		{
			str1[i]=str[i];
		}
		if(l%2==0)
		{
			for(i=0;i<l;i++)
			{
				if(str[i]=='.')
				str[i]==str1[i];
				else if(str1[i]=='.')
				str1[i]=str[i];
			}
		/*	if(strcmp(str,str1)==0)
			printf("%s\n",str);
			else
			printf("-1\n");*/
		}
		else
		{
			for(i=0;i<l;i++)
			{
				if(str[i]=='.')
				str[i]='a';
				else if(str1[i]=='.')
				str1[i]='a';
			}
			/*if(strcmp(str,str1)==0)
			printf("%s\n",str);
			else
			printf("-1\n");*/
			
		}
			if(strcmp(str,str1)==0)
			printf("%s\n",str);
			else
			printf("-1\n");
	}
	return 0;
}

