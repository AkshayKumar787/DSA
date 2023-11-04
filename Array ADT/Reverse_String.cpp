#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = "akshay";
    char t;
    int i,j;
    j=strlen(arr)-1;
    for(int i=0;i<j;i++,j--)
    {
       swap(arr[j],arr[i]);
    }
    cout<<arr;
}