#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "decimal";
    char B[] = "medical";
    int H[26] = {};
    int i,j;
    int len1 =strlen(A);
    int len2 = strlen(B);
    for( i=0;i<len1;i++)
    {
       H[A[i]-97]++;
    }

    for(j=0;j<len2;j++)
    {
        H[B[j]-97]--;
        if(H[B[j]-97]<0 || H[B[j]-97]>1)
        {
            cout<<"not an anagram";
            break;
        }
    }
    if(B[j]=="\0" )
    {
        cout<<"anagram";
    }

    return 0;
}