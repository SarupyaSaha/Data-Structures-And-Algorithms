#include<iostream>
#include "Searching.h";

using namespace std;
int main() {
    int n;
    cout<< "Enter the number of elements:";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements:";

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to Search";
    cin>>key;
    // bubbleSort(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);
    int linearIndex=linearSearch(arr,key,n);
    int binaryIndex=binarySearch(arr,key,n);
    cout << "\nResults:\n";
    if (linearIndex != -1)
        cout << "Linear Search: Found at index " << linearIndex << endl;
    else
        cout << "Linear Search: Not Found\n";

    if (binaryIndex != -1)
        cout << "Binary Search: Found at index " << binaryIndex << endl;
    else
        cout << "Binary Search: Not Found\n";

    return 0;




}