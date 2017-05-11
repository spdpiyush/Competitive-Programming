//GeeksForGeeks Problem : Anagram(Easy)
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,l,count,l1;
	char str[105],str1[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		scanf("%s",str1);
		l=strlen(str);
		l1=strlen(str1);
		count=0;
		if(l==l1)
		{	
	      for(i=0;i<l;i++)
	      { 
		    for(j=0;j<l;j++)
		    {
			  if(str1[j]==str[i])
			  {
				str[i]='P';
				count++;
				break;
			  }  
		    }
          }
	      if(count==l) 
	      printf("YES\n");
	      else
	      printf("NO\n");
        }
        else
        printf("NO\n");
	}
	return 0;
}
