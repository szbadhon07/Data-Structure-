#include<conio.h>
#include<stdio.h>
#include<math.h>
                  //    [1  2]      [1  2]
                  //    [3  4]      [3  4]

int main()
{
int q,a[100][100],b[100][100],i,j,m,p,n,c[100][100],k;
printf("enter matrix m*p q*n:");
scanf("%d %d %d %d",&m,&p,&q,&n);

if(p != q)
{
    printf("error");
    return 0;
}

for(i=0;i<m;i++)
for(j=0;j<p;j++)
scanf("%d",&a[i][j]);

for(i=0;i<q;i++)
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
    c[i][j]=0;
for(k=0;k<p;k++)
   c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d ",c[i][j]);
printf("\n");
}
getch();
return 0;
}
