/*

///Ans of 1
#include <stdio.h>
int main()
{
    int i=0,word=0,c=0,space=0;
    char s[100];

    printf("\nInput your string: ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
         c++;
    }

    for(i=0; s[i]!='\0'; i++)
    {

        if(s[i]!=' ')
        {
            word++;
           while(s[i]!=' ')
            i++;
        }
    }

    printf("\nNumber of words are: %d",word);
    printf("\n\nThe Number of charecters is %d",c);
    printf("\n");

}
*/

/*
///Ans of 02

#include <stdio.h>

void addstr(char s[], char s1[])
{
    int i,ln=0;

    for(i=0; s[i]!='\0'; i++)
    {
        ln++;
    }

    s[ln]=' ';
    ln++;

    for(i=0; s1[i]!='\0'; i++)
    {
        s[ln++] = s1[i];
    }

    s[ln]='\0';
}
int main()
{
    int i=0,ln=0;
    char s[100] ,s1[100];

    printf("Input your first string: ");
    gets(s);
    printf("Input your second string: ");
    gets(s1);

    addstr(s,s1);
    printf("%s",s);

}
*/

/*

///Ans no 03

#include <stdio.h>
#include <string.h>

int main()
{
    char s[50],s1[50];
    int i=0 ,ln=0,j=0,ck=0;

    printf("\nEnter the string:\n ==>");
    gets(s);

    printf("\n\nEnter your searched item\n ==>");
    gets(s1);

    for(ln=0; s[ln]!='\0'; ln++);

    for(i=0; i<ln; i++)
    {

        if(s[i] == s1[0])
        {
            for(j=1; s1[j]!='\0'; j++)
            {

                if(s[++i] == s1[j])
                {

                    printf("\nThe Index number of searched item the is = %d",i);
                }
            }
        }
    }
}
*/
/*

///Ans no 04

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],c[100];
    int p=0,r=0,i,t=0,s,n,o;

    puts("\nEnter First String:");
    gets(a);

    puts("\nEnter Second String:");
    gets(b);

    printf("\nEnter the position where the item has to be inserted: ");
    scanf("%d",&p);

    r = strlen(a);
    n = strlen(b);

    for(i=0; i <= r; i++)
    {
        c[i]=a[i];
    }

    s = n+r;
    o = p+n;

    for(i=p; i<s; i++)
    {
        a[o] = c[i];

        if(t<n)
        {
            a[i] = b[t];
            t++;
        }
        o++;
  }
    printf("\nThe new string is %s", a);

}

*/
















