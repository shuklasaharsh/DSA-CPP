#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n1, n2, c = 0, b = 0;
    ll a[2] = {0};
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2;
        c += n1;
        b += n2;
        ll x = abs(c - b);
        if(x > a[1] )
        {
            a[0] = (c>b)? 1:2;
            a[1] = x;
        }
               
    }
    cout<<a[0]<<" "<<a[1];
}
