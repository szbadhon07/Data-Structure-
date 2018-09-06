#include <stdio.h>
#include <conio.h>
#include<string.h>


int main ( )
   {
   int data[100]={11,22,30,33,40,44,55,60,66,77,80,88,99};
   int beg = 1, end = 13, item = 22;
   int mid = (beg+end)/2;

   while(beg<=end && data[mid]!=item)
     {
         if(item < data[mid])
            end = mid - 1;
         else
            beg = mid + 1;
         mid = (beg+end)/2;
     }

   if(data[mid] == item)
     printf("data found in %d location", mid + 1);
   else
    printf("data not found");

getch();
return 0;
    }
