#include<iostream>

using namespace std;

int main()
{
    int arr[] = { 22 , 11 , 44 , 33 , 40 , 30 };
    int n , i , j , temp;

    n = sizeof(arr)/sizeof(int);

    cout << endl << "The elements of the array : ";

    for( i=0; i<n; i++ ){

        cout << arr[i] << " ";
    }

    for( i=0; i<n; i++ ){

        for( j=i+1; j<n; j++ ){

            if( arr[j] < arr[i] ){

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << endl << endl << "After selection sort : ";

    for( i=0; i<n; i++ ){

        cout << arr[i] << " ";
    }

    cout << endl;
}
