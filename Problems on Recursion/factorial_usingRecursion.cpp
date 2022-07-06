#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    cout<<"Enter the no whose factorial is to be found : "<<endl;
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}