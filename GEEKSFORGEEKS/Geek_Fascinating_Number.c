//GeeksForGeeks Problem : Fascinating Number (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,cnt,j,k,i,count;
    int a1,a2;
    int ar[10]={0};
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&no);
		cnt=0;
		j=no;
		while(no)
		{
			k=no%10;
			if(k == ar[k])
			ar[k]*=10;
			else
			ar[k]=k;
			cnt++;
			no=no/10;
		}
		if(cnt>=3)
		{
		  a1 = j*2;
		  a2 = j*3;	
		  while(a1)
		  {
		  	k=a1%10;
		  	if(k == ar[k])
			ar[k]*=10;
			else
			ar[k]=k;
		  	a1=a1/10;
		  }
		  while(a2)
		  {
		  	k = a2%10;
		  	if(k==ar[k])
			ar[k]*=10;
			else
			ar[k]=k;
		  	a2=a2/10;
		  }
		  
		  for(i=1;i<10;i++)
		  {
		  	if(i==ar[i])
		  	count++;
		  }
		  if(count==9)
		  printf("Fascinating\n");
		  else
		  printf("Not Fascinating\n");
		}
		else
		printf("Number should be atleast three digits\n");
	}
	return 0;
}
