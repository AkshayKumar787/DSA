#include <bits/stdc++.h>
using namespace std;

void pair_with_sum_unsorted(int A[],int H[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
        if(H[k-A[i]] !=0){
            cout<<A[i]<<"+"<<(k-A[i])<<"="<<k<<endl;
           
        }
        
    }
}
// O(n)

void pair_with_sum_sorted(int A[],int k,int n1)
{
    int i=0,j=n1-1;
    while(i<=j)
    {
        if(A[i]+A[j] == k)
        {
            cout<<A[i]<<"+"<<A[j]<<"="<<k<<endl;
            i++;
            j--;
            
        }
        else if(A[i]+A[j]>k)
        {
            j--;
        }
        else
            i++;
    }
// O(n)
}
int main()
{
    int arr[] = {2,4,1,3,7,5,8,9,11};//Unsorted array
    int arr1[] = {1,3,4,5,6,8,9,10,12,14};//Sorted array
    int n = sizeof(arr)/sizeof(arr[0]);
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int k=10;
    int H[16] = {};
    //  pair_with_sum_unsorted(arr,H,n,k);
    pair_with_sum_sorted(arr1,k,n1);
    return 0;
}