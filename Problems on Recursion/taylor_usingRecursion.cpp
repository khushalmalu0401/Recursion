#include <bits/stdc++.h>
using namespace std;
//e^x = 1 + x/1 + x^2/2 + x^3/3 + ..............n terms
double e(int x, int n)
{
    static double p = 1;
    static double f = 1;
    double r;
    if (n == 0)
        return 1;
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r+ p/f;
    }
}
int main()
{
    cout<<e(3,15)<<endl;
    return 0;
}