#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
int a[100],temp,i,j,n,k=-500;
printf("enter n:");
scanf("%d",&n);

a[0]=k;
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

for(i=1;i<=n;i++)
{
    temp=a[i];

        for(j=i-1;temp<a[j];j--)
        {
        a[j+1]=a[j];
        }
    a[j+1]=temp;
}
for(i=1;i<=n;i++)
printf("ans=%d\n",a[i]);
getch();

return 0;
}
