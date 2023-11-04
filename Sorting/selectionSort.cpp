#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
{
    int j,k;
for(int i=0;i<n;i++)
{
    for(j=k=i;j<n;j++)
    {
        if(arr[j]<arr[k]){
            k=j;
        }
    }
    swap(arr[i],arr[k]);
}
}
int main(){
    int arr[] = {4,5,2,3,1,9,8,7,10};
    int n=9;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}