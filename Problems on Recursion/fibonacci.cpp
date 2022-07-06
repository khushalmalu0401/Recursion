#include <bits/stdc++.h>
using namespace std;
// Iterative Way
int fib(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
        return n;
    else
        for (int i = 2; i <= n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
    return s;
}
// Recursive Way O(2^n)
int fib1(int n)
{
    if (n <= 1)
        return n;
    else
        return fib1(n - 2) + fib1(n - 1);
}
// Recursive Way O(n)
int F[10];
int fib2(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fib(n - 2);
        if (F[n-1] == -1)
            F[n-1] = fib(n-1);
        return F[n-2] + F[n-1];
    }
}
int main()
{
    cout << fib(6)<<endl;
    cout << fib1(6)<<endl;
    for(int i = 0;i<10;i++){
        F[i] = -1;
    }
    cout << fib2(6)<<endl;
    return 0;
}