//GeeksForGeeks Problem : Excel Sheet | Part -2 (Easy)
//Author : Piyush
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int t,sum,i,j,l,k;
	char str[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},str1[10];
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%s",str1);
		l=strlen(str1);
		k=0;
		for(i=l-1;i>=0;i--)
		{
			for(j=0;j<26;j++)
			{
				if(str1[i] == str[j])
				{
					sum+=(j+1)*pow(26,k);
					break;
				}
			}
			k++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
