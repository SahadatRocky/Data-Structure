#include <iostream>
using namespace std;

int liner_search(int arr[], int n, int x) {

  for (int i = 0; i < n; i++)
    if (arr[i] == x)
      return i;
  return -1;
}

int main() {
  //int arr[] = {2, 4, 0, 1, 9};
  int arr[10],n,key;

    cout<<"enter the size of Array:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    cout<<"enter the searching key is:";
    cin>>key;

  int result = liner_search(arr, n, key);
  if (result == -1)
    cout<<"Not found";
  else
    cout << "Element found at index: " << result;
}
