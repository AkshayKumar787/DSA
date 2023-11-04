#include <bits/stdc++.h>
using namespace std;


void duplicate_element(int A[],int n)
{
    int last_element=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1] && A[i]!=last_element){
            cout<<A[i]<<endl;
            last_element = A[i];
        }
    }
}
// O(n)
void count_duplicate_elements(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            int j=i+1;
            while(A[j]==A[i]) j++;
            cout<<A[i]<<"-"<<j-i<<endl;
            i=j-1;
        }
    }
} 
// O(n)
int main()
{
    int arr[]={3,6,8,8,10,12,15,15,15,20};//sorted array
    int n=sizeof(arr)/sizeof(arr[0]);
    duplicate_element(arr,n);
    count_duplicate_elements(arr,n);
    return 0;

}