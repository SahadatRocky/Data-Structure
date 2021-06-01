#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
             int temp;
             temp=arr[min_idx];
             arr[min_idx]=arr[i];
             arr[i]=temp;
    }
}


void printArray(int arr[], int n)
{
    int i;
    cout<<"selection Sort:";
    for (i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    //int arr[] = {64, 25, 12, 22, 11};
     int arr[10],n;
    cout<<"enter the Size of Array:";
    cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
