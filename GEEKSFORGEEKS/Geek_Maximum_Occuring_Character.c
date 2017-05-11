//GeeksForGeeks Problem :  MAximum Occuring Character(Basic)
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,j,count,k,temp;
	char str[105],al[26];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		for(i=97,k=0;i<=122;i++,k++)
		{
			count=0;
			for(j=0;j<l;j++)
			{
				if(str[j]==i)
				count++;
			}
			al[k]=count;
		}
		/*for(i=0;i<24;i++)
		{
			for(j=i;j<25;j++)
			{
				temp=al[i];
				al[i]=al[j];
				al[j]=temp;
			}
		}
		*/
		temp=1;
		for(i=0;i<26;i++)	
		{
			if(al[i]>temp)
			{
				temp=al[i];
			}
		}
	}
}
