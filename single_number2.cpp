#include <bits/stdc++.h>
using namespace std;
int singleNumber(const int *A, int n1)
{
    int a[32] = {0};
    int k = 31, num = 0, i, p = 0;
    int m = 31;
    int G[n1];
    for (i = 0; i < n1; i++)
    {
        G[i] = A[i];
    }
    for (i = 0; i < n1; i++)
    {
        while (G[i] > 0)
        {
            a[k] = a[k] + (G[i] % 2);
            G[i] = G[i] / 2;
            k--;
        }
        k = 31;
    }
    for (i = 0; i <= 31; i++)
    {
        a[i] = a[i] % 3;
    }
    for (i = 0; i <= 31; i++)
    {
        num = num + ((pow(2, m)) * a[i]);
        m--;
    }
    return num;
}
int main(int argc, char const *argv[])
{
    int A[] = {2, 2, 1, 5, 1, 1, 2};
    int n = 7;
    int unique = singleNumber(A, n);
    cout << "\n"
         << unique;
    return 0;
}
