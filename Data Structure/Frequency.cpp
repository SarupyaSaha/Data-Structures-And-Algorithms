#include<iostream>
using namespace std;
int main(){
    int n,m;

    cin>>n>>m;
    int arr[n];
    for(int i=0;i<=n;i++)cin>>arr[i];

    int freq[m+1]={0};
    for(int i=0;i<n;i++){
        int a=arr[i];
        freq[a]++;

    }
    for (int i=1;i<=m;i++){
        cout<<freq[i]<<endl;
    }


}

