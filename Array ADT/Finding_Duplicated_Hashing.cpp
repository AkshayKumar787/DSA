#include <bits/stdc++.h>
using namespace std;

int main()
{
      int arr[]={3,6,8,8,10,12,15,15,15,20};//sorted array and it als works for unsorted arrays
      int n=sizeof(arr)/sizeof(arr[0]);
      int H[20] = {};

      for(int i=0;i<n;i++)
      {
        H[arr[i]]++;
      }

      for(int i=0;i<20;i++)
      {
        if(H[i]>1)
        {
            cout<<i<<"-"<<H[i]<<endl;
        }
      }

    //   O(n)
}