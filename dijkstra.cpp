#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
const int INF=1e9+10;
void dijkstra(int v,vector<pair<int,int>>adj[],int n)
{
    vector<int>level(N,INF);
    vector<bool>visited(N,false);
    set<pair<int,int>>st;
    st.insert({0,v});
    level[v]=0;
    while(st.size()>0)
    {
        auto temp=*st.begin();
        int child=temp.second;
        int wt=temp.first;
        st.erase(st.begin());
        if(visited[child]==1)continue;
        visited[child]=true;
        for(auto it:adj[child])
        {
            auto n_child=it.first;
            int n_wt=it.second;
            if(level[child]+n_wt<level[n_child])
            {
                level[n_child]=level[child]+n_wt;
                st.insert({level[n_child],n_child});
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<level[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>adj[N];
    for(int k=0;k<n;k++)
    {
        int i,j,wt;
        cin>>i>>j>>wt;
        adj[i].push_back({j,wt});
    }
    dijkstra(1,adj,n);
}
//dijkstra is used to find shortest ditance between source node to any node in weighted graph