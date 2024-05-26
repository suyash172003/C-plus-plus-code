#include<iostream>
#include<vector>
const long long int mod=1e9+7;
long long int dfs(long long int row,long long int col,std::vector<std::vector<bool>> &vis,std::vector<std::vector<long long int>> &dp)
{
    if(row<0||col<0||vis[row][col]==true)
    return 0;
    
    if(row==0&&col==0)
    {
        return 1;
    }
    if(dp[row][col]!=-1)
    return dp[row][col]%mod;
    int left=0,up=0;
    up=up+dfs(row-1,col,vis,dp);
    left=left+dfs(row,col-1,vis,dp);
    return dp[row][col]=(left%mod+up%mod)%mod;
}
int main()
{
    
    long long int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<bool>> vis(n,std::vector<bool> (n,false));
    std::vector<std::vector<long long int>> dp(n,std::vector<long long int> (n,-1));
    for(long long int i=0;i<m;i++)
    {
        long long int row,col;
        std::cin>>row>>col;
        vis[row-1][col-1]=true;
    }
    std::cout<<dfs(n-1,n-1,vis,dp);
}