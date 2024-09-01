#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
 
    if(t==0||t==2||t==3)
    {
        cout<<"NO SOLUTION";
        return 0;
 
    }
 
    int first,second;
    if(t%2==0)
    {
        first=t-1;
        second=t;
    }
    else
    {
        first=t;
        second=t-1;
    }
 
 
    while(first>0)
    {
        cout<<first<<" ";
        first-=2;
    }
 
    while(second>0)
    {
        cout<<second<<" ";
        second-=2;
    }
    cout<<"\n";
    return 0;
}
