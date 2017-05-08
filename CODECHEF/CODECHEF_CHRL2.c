//CodeChef Problem : Chef and String(Beginner)
//Problem Code : CHRL2
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j,k,count,work;
	char str[100005],str1[4]="CHEF";
	scanf("%s",str);
	l=strlen(str);
	work=0;
	for(i=0;i<l;i++)
	{
		k=0;
		count=0;
		if(str[i]=='C')
		{
			for(j=i;j<l;j++)
			{
				if(str[j] == str1[k])
				{
					count++;
					k++;
				}
			}
			if(count>=4)
			work++;
		}
	}
	printf("%d\n",work);
	return 0;
}
