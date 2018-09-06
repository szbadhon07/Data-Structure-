#include <stdio.h>
#include<conio.h>
#define max 120
int main()
{
    int i,j,totalnumber,number[max];
    int scan,minvalue,temp;
    printf(" How many number you will enter :");
    scanf("%d",&totalnumber);

    for(i=0;i<totalnumber;i++)
		scanf("%d",&number[i]);

	for(scan=0;scan<totalnumber;scan++)
	{
		minvalue=scan;
		for(j=scan+1;j<totalnumber;j++)
        {
			if(number[minvalue]>number[j])
				minvalue=j;
        }
			temp=number[scan];
			number[scan]=number[minvalue];
			number[minvalue]=temp;
        }
    for(i=0;i<totalnumber;i++)
		printf(" %d ",number[i]);

      getch();

      return 0;
   }

