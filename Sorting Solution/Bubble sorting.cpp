#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a[100],n,t;
    printf("enter how many num:");
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        printf("enter:");
        scanf("%d",&a[i]);
        }

    for(i=0;i<n-1;i++)
        for(j=0;j<n-i;j++)
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }

        for(j=0;j<n;j++)
            printf("%d ",a[j]);

    getch();
    return 0;
}
