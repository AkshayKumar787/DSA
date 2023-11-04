#include <bits/stdc++.h>
using namespace std;

void hashmapping_finding_missing_elements(int arr[],int H[],int n)
{
        for(int i=0;i<n;i++)
        {
            H[arr[i]]++;
        }


        for(int i=1;i<=n;i++)
        {
            if(H[i]==0)
            {
                cout<<i<<endl;
            }
        }

}

int main()
{
     int arr[] = {3,7,4,9,12,6,1,11,2,10};
     int n=sizeof(arr)/sizeof(arr[0]);
    
     int H[12] = {};
     hashmapping_finding_missing_elements(arr,H,n);
     return 0;
}