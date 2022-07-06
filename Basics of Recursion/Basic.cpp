#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    // if(n>0){
    //     cout<<n<<" ";   //4 3 2 1
    //     fun(n-1);
    // }
    if (n > 0)
    {
        fun(n - 1);
        cout << n << " "; // 1 2 3 4
    }
}
int main()
{
    int x = 4;
    fun(x);
    return 0;
}