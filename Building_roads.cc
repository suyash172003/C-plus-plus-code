#include <iostream>
#include <vector>
void dfs(int ind,std::vector<bool> &vis,std::vector<std::vector<int>> &adj)
{
    vis[ind]=true;
    for(auto it:adj[ind])
    {
        if(vis[it]==false)
        dfs(it,vis,adj);
    }
    return;
}
int main()
{
    int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<int>> adj;
    for(int i=0;i<m;i++)
    {
        int first,second;
        std::cin>>first>>second;
        adj[first].push_back(second);
        adj[second].push_back(first);
    }
    std::vector<bool> vis(n,false);
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            count++;
            dfs(i,vis,adj);
        }
    }
    std::cout<<count<<std::endl;
}