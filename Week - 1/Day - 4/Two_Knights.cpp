#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
long long int solve(ll num)
{
    ll total;
    total=(long long)(num*num)*(num*num-1);
    total=total/2;
    ll number=(num-2)*(num-1)*2*2;
 
    return total-number;
}
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
    cin>>t;
 
    ll i=1;
    while(i<=t)
    {
        ll ans=solve(i);
        cout<<ans<<"\n";
        i++;
    }
}
