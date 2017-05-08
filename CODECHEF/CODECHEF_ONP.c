//CodeChef Problem : Transform The Expression(Beginner)
//Problem Code : ONP
//Author : Piyush
#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,j,k;
	char str[401],temp[400],p[401];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		j=0;
		k=0;
		for(i=0;i<l;i++)
		{
			if(str[i]>=97 && str[i]<=122)
			{
				p[k]=str[i];
				k++;
			}
			else if(str[i]=='(')
			{
				temp[j]=str[i];
				j++;
			}
			else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='^')
			{
				if(str[i]=='^')
				
			}
		}
		
	}
}
