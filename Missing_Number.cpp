#include <iostream>
using namespace std;
const int N=1e7;
int vis[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        int m;
        cin>>m;
        vis[m]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            cout<<i;
            break;
        }
    }
}