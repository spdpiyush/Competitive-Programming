//CodeChef Problem : Studying Alphabet(Beginner)
//Problem Code : ALPHABET
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,l,l1,count;
	char str[27],str1[15];
	scanf("%s",str);
	l=strlen(str);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str1);
		l1=strlen(str1);
		count=0;
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l;j++)
			{
				if(str1[i]==str[j])
				{
					count++;
					break;
				}
			}
		}
		if(count==l1)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
