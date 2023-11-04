 #include <bits/stdc++.h>
using namespace std;


void Bubble(int arr[],int n )
{
    for(int i=0;i<n-1;i++)
    {int flag = 0;
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=0;
            }
        }
    }
}
int main(){
    int arr[] = {4,5,2,3,1,9,8,7,10};
    int n = 9;
    Bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}