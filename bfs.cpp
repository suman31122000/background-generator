#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<bool>visited(N,false);
int level[N];
void bfs(int v,vector<int>adj[])
{
    queue<int>q;
    q.push(v);
    visited[v]=true;
    while(!q.empty())
    {
        auto child=q.front();
        q.pop();
        cout<<child<<" ";
        for(auto n_child:adj[child])
        {
            if(visited[n_child]) continue;
            q.push(n_child);
            visited[n_child]=true;
            level[n_child]=level[child]+1;
        }
        
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>adj[N];
    for(int k=0;k<n;k++)
    {
        int i,j;
        cin>>i>>j;
        adj[i].push_back(j);
        adj[j].push_back(i);
        
    }
        bfs(1,adj);
         for(int i=0;i<=n;i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }
}

//bfs is used to traveral through level wise;
//level of unweighted edge or equal edge graph shows tho shortest path from source to the node 
