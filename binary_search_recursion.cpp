
#include <iostream>
using namespace std;

int binarySearchRecursion(int arr[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      return binarySearchRecursion(arr, x, low, mid - 1);

    return binarySearchRecursion(arr, x, mid + 1, high);
  }

  return -1;
}

int main(void) {

  int arr[10],n,key;

  cout<<"enter the size of Array:";
  cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    cout<<"enter the searching key is:";
    cin>>key;

  int result = binarySearchRecursion(arr, key, 0, n - 1);
  if (result == -1)
    cout<<"Not found";
  else
    cout<<"Element is found at index:"<<result;
}
