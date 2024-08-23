#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
 
    if(n%4==0)
    {
        cout<<"YES\n";
        int num=n/4;
        int start=1,end=n-num+1;
        int ans=num*2;
        cout<<ans<<"\n";
        for(int i=0;i<num;i++)
            cout<<start++<<" ";
        for(int i=0;i<num;i++)
            cout<<end+i<<" ";
 
        cout<<"\n"<<n-ans<<"\n";
        for(int i=0;start<end;i++)
            cout<<start++<<" ";
 
    }
    else if((n-3)%4==0)
    {
        cout<<"YES\n";
 
        int num=(n-3)/4;
        int start=4,end=n-num+1;
 
        int ans=(num*2)+2;
        cout<<ans<<"\n";
 
        cout<<"1 2 ";
 
        for(int i=0;i<num;i++)
            cout<<start++<<" ";
        for(int i=0;i<num;i++)
            cout<<end+i<<" ";
        cout<<"\n"<<n-ans<<"\n3 ";
 
        for(int i=0;start<end;i++)
            cout<<start++<<" ";
 
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
