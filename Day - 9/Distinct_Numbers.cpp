#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
 
    long long int arr[n];
    int count=1;
 
    for(int i=0;i<n;i++)
        cin>>arr[i];
 
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
            count++;
    }
    cout<<count<<endl;
    return 0;
}