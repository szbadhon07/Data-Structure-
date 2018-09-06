#include<conio.h>
#include<stdio.h>
#include<math.h>
                  //    [1  2]      [1  2]
                  //    [3  4]      [3  4]

int main()
{
int a[100][100],b[100][100],i,j,m,p,n,k;


for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);

for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&b[i][j]);

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%d ",a[i][j]+b[i][j]);
printf("\n");
}
getch();
return 0;
}
