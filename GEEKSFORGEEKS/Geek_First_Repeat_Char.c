//GeeksForGeeeks Problem : Find First Repeated Character (Basic)
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,count,l,ne[1002],k,s;
	char str[1002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		k=0;
		count=0;
		for(i=0;i<1002;i++)
		{
			ne[i]=0;
		}
		for(i=0;i<l;i++)
		{
			for(j=i+1;j<l;j++)
			{
			    if(str[i]==str[j])	
			    {
			    	ne[k]=j;
			    	count++;
			    	k++;
			    	break;
			    }
			}
		}
		s=ne[0];
		for(k=1;k<count;k++)
		{
		  if(ne[k] < s)	
		  s=ne[k];
		}
		if(count!=0)
		printf("%c\n",str[s]);
		else
		printf("-1\n");
	}
	return 0;
}
