//CODECHEF Problem :Tanu and Head-bob.(Begineer)
//Problem Code : HEADBOB
//Author  : By PIYUSH.
#include<stdio.h>
int main()
{
int t,no,in,ni,ns,i;
char ch;
scanf("%d\n",&t);
while(t--)
{
in=0;
ni=0;
ns=0;
scanf("%d\n",&no);
for(i=1;i<=no;i++)
{
scanf("%c",&ch);
if(ch == 'I')
in++;//I is YES in Indian Way.
else if(ch == 'Y')
ni++;
else
ns++;
}
if(in==0 && ni==0)
printf("NOT SURE\n");
else if(in>0 && ni==0)
printf("INDIAN\n");
else if(ni>0 && in==0)
printf("NOT INDIAN\n");
}
return 0;
}
