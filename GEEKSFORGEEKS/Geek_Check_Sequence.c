//GeeksForGeeks Problem :Check For Sequence(Basic)
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,l,l1,k,count;
	char str[1002],str1[1002];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		k=0;
		scanf("%s%s",str,str1);
		l=strlen(str);
		l1=strlen(str1);
		for(i=0;i<l;i++)
		{
			for(j=i;j<l1;j++)
			{
				if(str[i]==str1[j])
				{
					count++;
					break;
				}
			}
			if(count==l)
			{
				k++;
				break;
			}
		}
		if(k==1)
		printf("1\n");
		else
		printf("0\n");
	}
	return 0;
}
