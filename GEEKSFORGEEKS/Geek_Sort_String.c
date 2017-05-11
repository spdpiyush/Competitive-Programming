//GeeksForGeeks Problem : Sort A String( Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,j;
	char str[105],temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&l);
		scanf("%s",str);
		
		for(i=0;i<l-1;i++)
		{
		  for(j=i+1;j<l;j++)
		  {
		  	if((str[i])>(str[j]))
		  	{
		  		temp=str[i];
		  		str[i]=str[j];
		  		str[j]=temp;
		  	}
		  }	
		}
		printf("%s\n",str);
	}
	return 0;
}
