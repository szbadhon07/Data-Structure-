/*1.	Write a program which performs the following tasks:
- initialize an integer array of 10 elements in main()
- multiply each element of array by 3
- Then reversely push the value of array to another array and then print
Input: A []: 0 1 2 3 4 5 6 7 8 9
Output: B []: 27 24 21 18 15 12 9 6 3 0*/

/*#include <stdio.h>
int main()
{
    int i,j,n;
    int arr[10],arr1[10];

    printf("\nEnter the number of the elements\n ==>");
    scanf("%d",&n);

    printf("\n\nEnter the elements ==>");

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0; i<n; i++)
    {

        arr1[i] = arr[i] * 3;

    }

    printf("\n\nThe elements are==>");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr1[i]);

    }
    printf("\n");

}*/



/*2.	Write a program which insert value in the middle of array.
-	Suppose array initialize is : 11 12 13 15 16 17
-	Insert value 14 in middle of array
-	Output shows: 11 12 13 14 15 16 17*/


/*#include <stdio.h>
int main()
{
    int a[20] ;
    int i,c=-1,n,pos=0,p;

    printf("\nEnter the amount number of the elements ==>");
    scanf("%d",&p);

    printf("\n\nEnter the elements:==> ");

    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the position :==>");
    scanf("%d",&pos);

    printf("\nEnter the number you want to insert:==>");
    scanf("%d",&n);

    for(i=p; i>=pos; i--)
    {
        a[i+1] = a[i];
    }

    a[pos] = n;
    p++;

    printf("\nThe elements are==>");
    for(i=0; i<p; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}*/




/*
#include <stdio.h>
int main()
{
    int a[10] ;
    int i,c=-1,n,pos=0,p;

    printf("\nEnter the number of the elements ==> ");
    scanf("%d",&p);

    printf("\nEnter the numbers:==> ");

    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the position :==> ");
    scanf("%d",&pos);

    for(i=pos; i<=p; i++)
    {
        a[i] = a[i+1];
    }

    p--;

     printf("\nThe elements are==> ");
     for(i=0; i<p; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}*/


/* 5.	Write a program that will do the following:
- Declare and initialize 2 (two) 2-dimensional array of 3/3 in function main().
- Pass the contents of 1st array elements into function firstchange() and Multiply the contents of  element by 7 and then print it
- Pass the contents of 2nd array elements into function secondchange() and add 5 to each of the array elements and print it.
Input: FirstArray[3][3] = {1,2,3,4,5,6,7,8,9};
            SecondArray[3][3] = {1,2,3,4,5,6,7,8,9};
Output:
          FirstArray 7 14 21 28 35 42 49 56 63
          SecondArray 6 7 8 9 10 11 12 13 14 */
/*4.	Content of array: 34 21 78 4 2 8 23
               Find the highest and lowest value from your array.
               Sample Output:
                     Highest Value: 78
              Lowest Value: 2
*/
#include<stdio.h>


int main()
{
    int arr[7]={34,21,78,4,2,8,23};
    int maxnum=0,minnum=0;
    int i;
    for(i=0;i<7;i++)
    {
        if(arr[i]>maxnum)
        {
            maxnum=arr[i];
        }
        if(arr[i]<=minnum)
        {
            minnum=arr[i];
        }
    }
    minnum=maxnum;
    for(i=0;i<7;i++)
    {
        if(arr[i]<=minnum)
        {
            minnum=arr[i];
        }
    }
    printf("Highst Value: %d\n",maxnum);
    printf("Lowest Value: %d\n",minnum);


}

/// Ans no 05

/*#include <iostream>
using namespace std;

void secondchange(int x[3][3]);
void firstchange(int x[3][3]);
void print(int a[3][3]);

int main()
{
    int a[3][3];
    int b[3][3];

    cout<<"Enter the first array==> \n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }

    firstchange(a);
    cout<<endl<<endl;
    print(a);

    cout<<"\n\nEnter the second array==> \n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>b[i][j];
        }
    }

    secondchange(b);
    cout<<endl<<endl;
    print(b);

}


void firstchange(int x[3][3])
{

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            x[i][j] = x[i][j]*7;
        }
    }

}

void secondchange(int x[3][3])
{

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            x[i][j] = x[i][j]+5;
        }
    }

}

void print(int a[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j];
            cout<<" ";
        }
     cout<<endl;
    }

}
*/


