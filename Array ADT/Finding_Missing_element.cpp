#include <bits/stdc++.h>
using namespace std;

void missingElement(int arr[],int n)
{
    int diff = arr[0]-0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i != diff)
        {
            cout<<i+diff;
            break;
        }

    }
}
void continues_missingElement(int arr[], int n)
{
    int diff = arr[0]-0;
    for( int i=0;i<n;i++)
    {
        if(arr[i]-i!=diff)
        {
            while (diff<arr[i]-i)
            {
                cout<<i+diff<<endl;
                diff++;
            }
            
        }
    }
// o(n)
}

int main()
{
    int arr[] = {1,2,3,4,5,8,9,10};
    int n=9;
    // missingElement(arr,n);
    continues_missingElement(arr,n);
    return 0;

}
