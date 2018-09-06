#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
int a[100], i, n;
printf("Enter size of an array:");
scanf("%d",&n);

for(i=0;i<n; i++)
 scanf("%d",&a[i]);

printf("\n\nforward Print:\n");
// print forwardly
for(i=0;i<n; i++)
 printf("%d ",a[i]);

printf("\n\nBackward Print:\n");
// print backwardly
for(i=n-1;i>=0; i--)
 printf("%d ",a[i]);

getch();
return 0;
}
