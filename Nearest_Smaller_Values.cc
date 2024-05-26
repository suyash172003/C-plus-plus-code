#include <iostream>
#include <stack>
#include <vector>
#include <utility>
int main()
{
    int n;
    std::vector<int> v;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        std::cin>>m;
        v.push_back(m);
    }
    std::vector<std::pair<int,int>> st;
    std::vector<int> ans;
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&&st[st.size()-1].first>=v[i])
        {
            st.pop_back();
        }
        if(!st.empty())
        {
            ans.push_back(st[st.size()-1].second);
        }
        if(st.empty())
        ans.push_back(0);
        st.push_back({v[i],i+1});
    }
    for(auto it:ans)
    {
        std::cout<<it<<" ";
    }
    return 0;
}