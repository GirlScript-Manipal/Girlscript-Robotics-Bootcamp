#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    int i,j,k;
    for(i=0;i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if (arr[j]>arr[j+1]){
                k= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=k;}

}
int main()
{
    int arr[]={90,8,12,13,1,60};
    int n =sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    int l;
    for (l=0; l<n; l++)
        cout<<arr[l]<<" ";
    return 0;
}

