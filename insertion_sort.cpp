#include <iostream>
using namespace std;
void insertion_sort(int arr[], int length);
void print_array(int array[],int size);

int main()
{
    //int arr[] = {4,6,3,7,5,9,2,8,1,10};
    int arr[10],n;
    cout<<"enter the Size of Array:";
    cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

    insertion_sort(arr,n);
    print_array(arr,n);
    return 0;
}

void insertion_sort(int arr[], int length)
{
    int i,j,tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void print_array(int arr[], int n)
{
    int j;
    cout<<"insertion sort:";
    for (j = 0; j < n; j++)
    {
       cout<< arr[j]<< " ";
    }
    cout << endl;
}
