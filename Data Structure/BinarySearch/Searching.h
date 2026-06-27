//
// Created by Sarupya on 2/2/2026.
//
#include <iostream>
using namespace std;
#ifndef SEARCHING_SEARCHING_H
#define SEARCHING_SEARCHING_H

#endif //SEARCHING_SEARCHING_H

  void bubbleSort(int arr[],int n) {

    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-1-i;j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
void selectionSort(int arr[], int n) {

      for (int i = 0; i < n - 1; i++) {

          int minIndex = i;

          for (int j = i + 1; j < n; j++) {
              if (arr[j] < arr[minIndex]) {
                  minIndex = j;
              }
          }

          int temp = arr[i];
          arr[i] = arr[minIndex];
          arr[minIndex] = temp;
      }
  }

int linearSearch(int arr[], int key,int n) {
      for (int i=0;i<n;i++) {
          if (arr[i]==key)
               return i;


      }
      return -1;

  }
void printArray(int arr[], int n) {
      for (int i = 0; i < n; i++) {
          cout << arr[i] << " ";
      }
      cout << endl;
  }

int binarySearch(int arr[], int key,int n) {
     int low=0, high=n-1;
      while (low<=high) {
          int mid=(high+low)/2;
          if (arr[mid]==key) {
              return mid;
          }
          else if (key<arr[mid]){
              high=mid-1;

          }
          else {
              low=mid+1;
          }
      }


  }


