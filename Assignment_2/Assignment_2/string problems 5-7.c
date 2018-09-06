
/*

/// ans no 06

#include<stdio.h>
void strcopy(char a[], char b[])
{
    int i=0;
    while(1)
    {
        b[i] = a[i];
        if(a[i] == '\0')
            break;
            i++;
    }
}
int main()
{
    char s1[20],s[20];
    printf("Input 2 string:\n==>\n");
    gets(s);
    gets(s1);
    strcopy(s1,s);
    printf("%s",s1);
}

*/



/// ans no 07

#include<stdio.h>
#include<string.h>

int compare(char a[], char b[])
{
      int i = 0,ck=0;

    while(a[i]!='\0' || b[i]!='\0'){

        if(a[i]!= b[i]){

            if(a[i] > b[i])
                ck = 1;

            else if(a[i] < b[i])
                ck = -1;

            break;
        }

        i++;
    }
    return ck;

}
int main()
{
    char s[20],s1[20];
    printf("Input 2 string:\n==>\n");

    gets(s);
    gets(s1);
    int i = 0,ck=0;

    compare(s,s1);

    printf("%d",ck);

}



