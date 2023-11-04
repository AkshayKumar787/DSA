#include <bits/stdc++.h>
using namespace std;

class LowerTri{
    private:
        int *A;
        int n;
    public:
        LowerTri()
        {
            n=2;
            A = new int[2*(2+1)/2]; 
        }
        LowerTri(int n)
        {
            this->n = n;
            A = new int[n*(n+1)/2];
        }

        
};
