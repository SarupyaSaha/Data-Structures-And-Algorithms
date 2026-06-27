#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int st, int end){
    int index=st-1; int pivot=arr[end];

    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            index++;
            swap(arr[j],arr[index]);

        }
    }
    index++;
    swap(arr[end],arr[index]);
    return index;
}
void quickSort(vector<int> &arr,int st, int end){

    if(st<end){
       int pivIdx=partition(arr, st,end);
       quickSort(arr,st,pivIdx-1);
       quickSort(arr,pivIdx+1,end);
    }


}
int main(){
int n;
cin>>n;
    vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

quickSort(arr, 0, n-1);

for(int value: arr){
    cout<<value<<" ";
    

}
cout<<endl;
return 1;





}