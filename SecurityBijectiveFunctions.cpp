#include<iostream>
using namespace std;
//Selection sort
int swap(int *, int *);
int k=1;
int selectionSort(int [], int);
int main()
    { int n;
    cin>>n;
    int arr[n], i;
    for(i=0; i<n; ++i)
        cin>>arr[i];
    k = selectionSort(arr, n);
    if(k==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
    }
int selectionSort(int arr[], int n)
    { int i, j, minIndex;
    for(i=0; i<n-1; ++i)
        { minIndex = i;
        for(j=i+1; j<n; ++j)
            { if(arr[j]<arr[minIndex])
                minIndex = j;
            swap(&arr[minIndex], &arr[i]);
            }
        }
    for(i=0; i<n; ++i)
        { if(arr[i+1]==arr[i])
            k = 0;
        }
    return k;
    }
int swap(int *a, int *b)
    { int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
    }
