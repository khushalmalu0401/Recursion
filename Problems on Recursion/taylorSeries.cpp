#include <bits/stdc++.h>
using namespace std;
double e(int x,int n){
    double num = 1;
    double den = 1;
    double s = 1;
    for(int i = 1;i<=n;i++){
        num *= x;
        den *= i;
        s += num/den;
    }
    return s;
}
int main()
{
    cout<<e(3,15);
    return 0;
}