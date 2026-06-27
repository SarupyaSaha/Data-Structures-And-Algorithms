#include <iostream>
using namespace std;

int search(int arr[], int n, int x) {
int count=0;
  for (int i = 0; i < n; i++){
    if (arr[i] == x){

            cout<<"Found at:"<<i<<" "<<arr[i]<<endl;
       count++;
    }
    else{
                    cout<<"Not Found at:"<<i<<" "<<arr[i]<<endl;

    }
  }

  return count;
}

int main() {

  int n,x;
  cin>>n>>x;
    int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }


  int result = search(arr, n, x);

  cout<<"Number of element repeating in the array:" <<result;

}

