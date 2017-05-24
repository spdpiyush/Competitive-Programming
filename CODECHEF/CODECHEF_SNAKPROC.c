//CodeChef problem : Temple Land(SNAKQL17)
//Problem Code : SNAKPROC
//Author : Piyush
#include<stdio.h>
#include<string.h>
int main()
{
	int t,no,i,j,k,l,count;
	char str[502],str1[502];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		scanf("%s",str);
		i=0;
		k=0;
		for(i=0;i<no;i++)
		{
			str1[i]=='.';
		}
		for(i=0;i<no;i++)
		{
			if(str[i]!='.')
			{
				str1[k]=str[i];
				k++;
			}
		}
		count=0;
		if(k%2 == 0)
		{
			if(k==0)
			printf("Valid\n");
			else
			{
				for(i=0;i<k;i=i+2)
		        {
			  
			      if(str1[i]=='H' && str1[i+1]=='T')
			      count++;
			      else
			      {
			  	     count=-1;
			  	     break;
			      }
		        }
		        if(count==(k/2))
		        printf("Valid\n");
		        else
		        printf("Invalid\n");
			}
		}
		else
		{
			printf("Invalid\n");
		}
	}
	return 0;
}
