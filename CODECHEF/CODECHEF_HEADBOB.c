//CODECHEF Problem :Tanu and Head-bob.(Begineer)
//Problem Code : HEADBOB
//Author  : By PIYUSH.
#include<stdio.h>
void disp(int);
int main()
{
	int t,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		disp(no);
	}
	return 0;
}
void disp(int no)
{
	int in=0,i,ns=0,ni=0;
	char ch[no];
	scanf("%s",ch);
	for(i=0;i<no;i++)
	{
		if(ch[i]=='I')
		in++;
		else if(ch[i]=='Y')
		ni++;
		else
		ns++;
		
	}
	if(in==0 && ni==0)
	printf("NOT SURE\n");
	else if(in>0 && ni==0)
	printf("INDIAN\n");
	else
	printf("NOT INDIAN\n");
	
}
