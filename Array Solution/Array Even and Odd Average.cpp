#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
int a[100], i, n;
float odd=0, od=0, even=0, ev=0;
printf("Enter size of an array:");
scanf("%d",&n);

for(i=0;i<n; i++)
{
 scanf("%d",&a[i]);
 if(a[i]%2==0)
    {
        even = even + a[i];
        ev++;
    }
 else
    {
        odd = odd + a[i];
        od++;
    }
}
if(od== 0 || ev ==0)
printf("something error");
else
printf("Even average: %f  odd average: %f", even/ev, odd/ od);

getch();
return 0;
}
