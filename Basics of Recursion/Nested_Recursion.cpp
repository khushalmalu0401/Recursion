#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n>100)
        return n;
    else    
        return fun(fun(n+11));
}
int main()
{
    cout<<fun(106)<<endl;
    cout<<fun(98)<<endl;
    cout<<fun(44)<<endl;
    return 0;
}