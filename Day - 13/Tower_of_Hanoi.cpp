#include<bits/stdc++.h>
using namespace std;
 
vector<vector<char>> ans;
void solve(int n,char start,char help,char desti)
{
    if(n==0)
        return ;
 
    solve(n-1,start,desti,help);
    vector<char> temp={start,desti};
    ans.push_back(temp);
    solve(n-1,help,start,desti);
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
 
    char start='1';
    char help='2';
    char dest='3';
 
    solve(n,start,help,dest);
    int size1=ans.size();
 
    cout<<size1<<"\n";
    for(int i=0;i<size1;i++)
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
}
