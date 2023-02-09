#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+10;
void bfs(int v,vector<pair<int,int>>adj[])
{
    vector<int>level(N,INF);
    deque<int>q;
    q.push_front(v);
    level[v]=0;
    while(!q.empty())
    {
        auto child=q.front();
        q.pop_front();
        for(auto it:adj[child])
        {
            auto n_child=it.first;
            int n_wt=it.second;
            if(level[child]+n_wt<level[n_child])
            {
                if(n_wt==0) q.push_front(n_child);
                if(n_wt==1) q.push_back(n_child);
                level[n_child]=level[child]+n_wt;
            }
        }
    }

}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>adj[N];
    for(int k=0;k<n;k++)
    {
        int i,j;
        cin>>i>>j>>wt;
        adj[i].push_back({j,wt});

    }
    bfs(1,adj);

}
