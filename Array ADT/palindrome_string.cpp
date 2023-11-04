#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = "tot";
    int i,j;
    j=strlen(arr)-1;
    bool flag=true;
    for(int i=0;i<j;i++,j--)
    {
        if(!(arr[i]==arr[j]))
        {
            flag=false;
        }
         
    } 
    if(flag)
    {
        cout<<"palindrome";
    }
    else
        cout<<"not a palindrome";
   
}