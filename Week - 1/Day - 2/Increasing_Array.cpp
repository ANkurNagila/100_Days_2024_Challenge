#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
 
    long long int ans=0;
    long long int a[n];
 
    cin>>a[0];
    int term=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<term)
        {
            ans=ans+term-a[i];
        }
        else
        {
            term=a[i];
        }
    }
 
    cout<<ans<<"\n";
 
}
