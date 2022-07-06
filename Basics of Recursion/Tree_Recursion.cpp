#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    int x = 4;
    fun(x);
    return 0;
}