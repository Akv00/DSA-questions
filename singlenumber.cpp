#include <bits/stdc++.h>
using namespace std;
int singleNumber(const int* A, int n1) {
    int i=0,n=0;
    for(i=0;i<n1;i++)
    {
        n=n^A[i];
        cout<<n<<" ";
    }
    return n;3+
}
int main(int argc, char const *argv[])
{
    int A[]={1,2,3,4,5,1,2,3,4};
    int ans=singleNumber(A,9);
    cout<<ans<<endl;
    return 0;
}
