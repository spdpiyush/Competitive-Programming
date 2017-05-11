//GeeksForGeeks Problem : Parenthesis Checker (Easy)
//Author : By PIYUSH
#include<stdio.h>
#include<string.h>
#define MAX 105
char stack[MAX];
int top=-1;
void push(char);
int pop(char);
int main()
{
	int t,l,count,i,r;
	char str[105];
	scanf("%d",&t);
	while(t--)
	{
		top=-1;
		scanf("%s",str);
		l=strlen(str);
		count=0;
		for(i=0;i<l;i++)
		{
			if(str[i]=='[' || str[i]=='{' || str[i]=='(')
			{
				push(str[i]);
			}
			else
			{
				r=pop(str[i]);
				if(r == 1)
				count++;
			}
		}
		if(count==l/2)
		printf("balanced\n");
		else
		printf("unbalanced\n");
	}
	return 0;
}
void push(char str)
{
	top=top+1;
	stack[top]=str;
}
int pop(char str)
{
	 char s;
	 s = stack[top];
	 top--;
	 if(str == ']')
	 {
	 	if(s == '[')
	 	return 1;
	 	else
	 	return 0;
	 }
	 else if(str == '}')
	 {
	 	if(s == '{')
	 	return 1;
	 	else
	 	return 0;
	 }
	 else if(str == ')')
	 {
	 	if(s == '(')
	 	return 1;
	 	else
	 	return 0;
	 }
}
