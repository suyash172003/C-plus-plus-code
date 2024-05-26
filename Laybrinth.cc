#include <iostream>
#include <vector>
#include <string>
void dfs(int &start_row,int &start_col,int &end_row,int &end_col,std::vector<std::vector<bool>> &vis,std::vector<std::vector<char>> &mat,std::string &s,std::string &ans)
{
    vis[start_row][start_col]=true;
    if(start_row==end_row&&start_col==end_col)
    {
        if(ans=="&"||ans.length()>=s.length())
        {
            ans=s;
        }
        return;
    }
   
    int del_r[]={-1,0,+1,0};
    int del_c[]={0,-1,0,+1};
    char move[]={'U','L','D','R'};
    for(int i=0;i<4;i++)
    {
        int nrow=start_row+del_r[i];
        int ncol=start_col+del_c[i];
        if(nrow>=0&&nrow<mat.size()&&ncol>=0&&ncol<mat[0].size()&&vis[nrow][ncol]==false&&(mat[nrow][ncol]=='.'||mat[nrow][ncol]=='B'))
        {
            s.push_back(move[i]);
            dfs(nrow,ncol,end_row,end_col,vis,mat,s,ans);
            s.pop_back();
        }
    }
    
    vis[start_row][start_col]=false;
    return;
}
int main()
{
    int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<char>> mat(n,std::vector<char>(m,0));
    std::vector<std::vector<bool>> vis(n,std::vector<bool>(m,false));
    
    int start_row,start_col,end_row,end_col;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>mat[i][j];
            if(mat[i][j]=='A')
            {
                start_row=i;
                start_col=j;
            }
            if(mat[i][j]=='B')
            {
                end_row=i;
                end_col=j;
            }
        }
    }
    std::string s,ans="&";
    dfs(start_row,start_col,end_row,end_col,vis,mat,s,ans);
    if(ans!="&")
    {
        std::cout<<"YES"<<std::endl;
        std::cout<<ans.length()<<std::endl;
        std::cout<<ans<<std::endl;
    }
    else
    std::cout<<"NO"<<std::endl;
}