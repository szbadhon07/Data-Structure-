#include <stdio.h>
#include <conio.h>
#include<string.h>

int main ()
   {
   int data[100]={2,4,1,7,8,3,9,0,5};
   int loc = 0, n = 9, item = 9;
   data[n] = item;

   while(data[loc]!=item)
     loc++;

   if(loc == n)
     printf("data not found");
   else
    printf("%d", loc+1);

getch();
return 0;
    }
