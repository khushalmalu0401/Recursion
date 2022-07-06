#include <bits/stdc++.h>
using namespace std;
//To Learn this we have used recursion elsewhere we use 
//n*(n+1) / 2 wala formula   - O(1)
//Using Loop                 - O(n)
//using Recursion            - O(n)   && S.C = O(n)
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
int main()
{
    int x = 0;
    cout << "Enter the number : " << endl;
    cin >> x;
    cout << sum(x);
    return 0;
}