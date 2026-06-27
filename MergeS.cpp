
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{


    int temp[r-l+1];
    int i=l;
    int j=m+1;
    int k=0;

    while(i<=m && j<=r)
    {

        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;

        }
        else
        {
            temp [k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=m)
    {
        temp[k]=arr[i];
        k++;
        i++;

    }
    while(j<=r)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }

    for(int p=0; p<k; p++)
    {

        arr[l+p]=temp[p];

    }


}

void mergeSort(int arr[], int l, int r )
{
    if(l<r)
    {


        int m=l+(r-l)/2;

        mergeSort(arr, l,m);
        mergeSort(arr, m+1, r);

        merge(arr,l,m,r);

    }
}


void leftHalf(int arr[], int size)
{

    cout<<"First Half:";

    for(int i=0; i<size/2; i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;

}


void rightHalf(int arr[], int size)
{

    cout<<"Second Half:";

    for(int i=size/2; i<size; i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
void firstleftHalf(int arr[], int size)
{

    cout<<"First left Half:";

    for(int i=0; i<size/4; i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

void secondleftHalf(int arr[], int size)
{

    cout<<"Second left Half:";

    for(int i=size/4; i<size/2; i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
void firstrightHalf(int arr[], int size)
{

    cout<<"First Right Half:";

    for(int i=size/2; i<(3*size)/4; i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
void secondrightHalf(int arr[], int size)
{

    cout<<"Second Half:";

    for(int i=(3*size)/4; i<size; i++)
    {

        cout<<arr[i]<<" ";

    }
    cout<<endl;

}



void printarrSorted(int arr[], int size)
{

    for(int i=0; i<size; i++)
    {

        cout<<arr[i]<<" ";


    }


}





int main()
{long long n;
    cin>>n;

    vector<long long>arr(n);

    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }

    long long size=sizeof(arr)/sizeof(arr[0]);






    mergeSort(arr, 0, size-1);
    cout<<"Sorted Array"<<endl;
    printarrSorted(arr,size);



}
