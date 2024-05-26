#include <iostream>
#include <vector>
void dfs(std::vector<std::vector<char>> &mat,int row,int col,std::vector<std::vector<bool>> &vis,int n,int m)
{
    vis[row][col]=true;
    int del_r[]={-1,0,+1,0};
    int del_c[]={0,-1,0,+1};
    for(int i=0;i<4;i++)
    {
        int nrow=row+del_r[i];
        int ncol=col+del_c[i];
        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&vis[nrow][ncol]==false&&mat[nrow][ncol]=='.')
        dfs(mat,nrow,ncol,vis,n,m);
    }
    return ;
}
int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<char>> mat(n,std::vector<char>(m,'0'));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char ch;
            std::cin>>ch;
            mat[i][j]=ch;
        }
    }
    std::vector<std::vector<bool>> vis(n,std::vector<bool>(m,false));
    long int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vis[i][j]==false&&mat[i][j]=='.')
            {
                dfs(mat,i,j,vis,n,m);
                count++;
            }
        }
    }
    std::cout<<count;
    return 0;
}