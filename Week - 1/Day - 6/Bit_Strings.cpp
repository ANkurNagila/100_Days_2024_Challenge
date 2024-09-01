#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
 
    long long int ans=1;
    while(n--)
        ans=((ans%1000000007)*(2%1000000007))%1000000007;
 
    cout<<ans<<"\n";
 
}