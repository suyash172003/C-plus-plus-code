#include <iostream>
#include <vector>
const int mod=1e9+7;
long int dfs(std::vector<std::vector<char>> &mat,std::vector<std::vector<long int>> &dp,int row,int col)
{
    if(row<0||col<0||mat[row][col]=='*')
    return 0;
    if(row==0&&col==0)
    return 1;
    if(dp[row][col]!=-1)
    return dp[row][col];
    long int up=0,left=0;
    up=up+dfs(mat,dp,row-1,col);
    left=left+dfs(mat,dp,row,col-1);
    return dp[row][col]=(up%mod+left%mod)%mod;
}
int main()
{
    long int n;
    std::cin>>n;
    std::vector<std::vector<char>> mat(n,std::vector<char> (n,'\0'));
    for(long int i=0;i<n;i++)
    {
       for(long int j=0;j<n;j++)
       std::cin>>mat[i][j];
    }
    std::vector<std::vector<long int>> dp(n,std::vector<long int> (n,-1));
    std::cout<<dfs(mat,dp,n-1,n-1);
}