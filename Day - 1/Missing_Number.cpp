#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long int n;
    cin>>n;
 
    long long int a[n-1];
 
    for(int i=0;i<n-1;i++)
        cin>>a[i];
 
    for(int i=0;i<n-1;i++)
    {
        while(a[i]!=n and a[i]!=i+1)
        {
            int temp=a[i];
            a[i]=a[temp-1];
            a[temp-1]=temp;
        }
    }
 
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==n)
        {
            cout<<i+1<<"\n";
            return 0;
        }
    }
 
    cout<<n<<"\n";
}