#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
int main()
{
    std::vector<std::pair<int,int>> v;
    std::set<int> s;
    int n,x;
    std::cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        int m;
        std::cin>>m;
        v.push_back({m,i+1});
    }
    sort(v.begin(),v.end());
    int flag=0;
    for(int i=0;i<v.size();i++)
    {
        int sum=x-v[i].first;
        int j=i+1;
        int k=v.size()-1;
        while(j<k)
        {
            if(sum==v[j].first+v[k].first)
            {
                s.insert(v[i].second);
                s.insert(v[j].second);
                s.insert(v[k].second);
                for(auto it:s)
                std::cout<<it<<" ";
                flag=1;
                break;
            }
            while(j<k&&v[j].first+v[k].first<sum)
            j++;
            while(j<k&&v[j].first+v[k].first>sum)
            k--;
        }
        if(flag==1)
        break;
    }
    if(flag==0)
    std::cout<<"IMPOSSIBLE"<<std::endl;
}