#include<iostream>
using namespace std;

int main()
{
    int arr[10],n,key,start,end,mid;

    cout<<"enter the size of Array:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    cout<<"enter the searching key is:";
    cin>>key;

    start=1;
    end=n;
    mid=(start+end)/2;
    while(start<=end && arr[mid]!=key)
    {


        if(arr[mid]<key)
        {
            start=mid+1;

        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;

    }

        if(arr[mid]==key)
        {
            cout<<"found the location:"<<mid<<" ,"<< "index:"<<mid-1;
        }
        else{

            cout<<"not found";
        }


}
