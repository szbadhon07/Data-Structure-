#include<stdio.h>
#include<string.h>

int main()
{
	char a[80],b[80];
	int i,top;
	while(gets(a))
	{
		top=0;
	b[top]='(';
	top=top+1;
	for(i=0;i<=strlen(a);i++)
	{
	       if(i==strlen(a))
		  {  while(b[top-1]!='(')
			{
				printf("%c",b[top-1]);
				top=top-1;
			}

		   }

	       else if(a[i]=='^')
		{
			b[top]='^';
			top=top+1;
		}
		else if(a[i]=='*'||a[i]=='/')
		{
			while(b[top-1]=='^'||b[top-1]=='*'||b[top-1]=='/')
			{
				printf("%c",b[top-1]);
				top=top-1;
			}
			b[top]=a[i];
			top=top+1;
		}
		else if(a[i]=='+'||a[i]=='-')
		{
			while(b[top-1]=='^'||b[top-1]=='*'||b[top-1]=='/'||b[top-1]=='+'||b[top-1]=='-')
			{
				printf("%c",b[top-1]);
				top=top-1;
			}
			b[top]=a[i];
			top=top+1;
		}
		else if(a[i]==')')
		{
			while(b[top-1]!='(')
			{
				printf("%c",b[top-1]);
				top=top-1;
			}
	      top=top-1;	}
		else if(a[i]=='(')
		{
			b[top]=a[i];
			top=top+1;
		}
		else
			printf("%c",a[i]);
	}


printf("\n");	}
return 0;
}