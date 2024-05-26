#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
int main()
{
    int n;
    std::cin>>n;
    std::vector<int> arr1(n,0);
    std::vector<int> arr2(n,0);
    for(int i=0;i<n;i++)
    {
        int m;
        std::cin>>m;
        arr1[i]=m;
        arr2[i]=m;
    }
    sort(arr2.begin(),arr2.end());
    std::vector<std::vector<int>> dp(n+1,std::vector<int> (n+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr1[i-1]==arr2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=std::max(dp[i-1][j],dp[i][j-1]);
        }
    }
    std::cout<<dp[n][n];
}