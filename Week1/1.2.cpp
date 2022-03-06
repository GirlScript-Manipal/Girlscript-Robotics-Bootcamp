#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
    int i,j,temp;
    for (i=0; i<n-1; i++)
        for (j=i+1; j<n; j++)
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
}

int main()
{
    int arr[]={90,8,12,13,1,60};
    int n =sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    int l;
    for (l=0; l<n; l++)
        cout<<arr[l]<<" ";
    return 0;
}