#include <bits/stdc++.h>
using namespace std;
int pow(int base,int power){
    if(base == 0)
        return -1;
    else if(power == 0)
        return 1;
    else if(power %2 == 0)
        return pow(base*base,power/2);
    else        
        return base*pow(base*base,(power-1)/2);
}
int main()
{
    int base,power;
    cout<<"Enter base and power"<<endl;
    cin>>base>>power;
    cout<<pow(base,power);
    return 0;
}