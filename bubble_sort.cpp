#include<iostream>
using namespace std;

void bubble_sort(int *arr , int n);
void bubble_sort(int *arr , int n)
{
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the Size of Array:";
    cin>>n;
    int *arr=new int[n];

     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

    bubble_sort(arr, n);
   cout<<"bubble sorting is:";
    for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
cout<<endl;



 return 0;
}
