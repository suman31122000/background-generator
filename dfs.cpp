#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<bool>visited(N,false);
void dfs(int source,vector<int>adj[])
{
    visited[source]=true;
    cout<<source<<endl;
    for(auto child:adj[source])
    {
        if(visited[child]) continue;
        cout<<" parent "<<source<<" child "<<child<<endl;
        dfs(child,adj);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[N];
    for(int k=0;k<n;k++)
    {
        int i,j;
        cin>>i>>j;
        adj[i].push_back(j);
        adj[j].push_back(i);
        
    }
    int source=adj[0][0];
        dfs(0,adj);
}