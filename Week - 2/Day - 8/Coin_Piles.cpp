#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
 
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
 
        long long int no_1,no_2;
 
        no_1=(2*y-x)/3;
        no_2=(x-no_1)/2;
 
        if(no_1<0 || no_2<0)
        {
            cout<<"NO\n";
            continue;
        }
 
        if((no_1+no_2*2)==x && (no_2+no_1*2)==y)
            cout<<"YES\n";
        else
            cout<<"NO\n";
 
    }
 
}