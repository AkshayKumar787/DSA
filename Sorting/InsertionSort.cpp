#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j = i-1;
        int x =  arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}

int main(){
    int arr[] = {4,5,2,3,1,9,8,7,10};
    int n = 9;
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}