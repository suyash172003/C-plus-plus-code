#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
int main()
{
    int n,target;
    std::cin>>n>>target;
    std::vector<std::pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int m;
        std::cin>>m;
        v.push_back({m,i+1});
    }
    std::sort(v.begin(),v.end());
    int i=0;
    int j=v.size()-1;
    int flag=0;
    while(i<j)
    {
        if(v[i].first+v[j].first==target)
        {
            if(v[i].second<v[j].second)
            std::cout<<v[i].second<<" "<<v[j].second<<std::endl;
            else
            std::cout<<v[j].second<<" "<<v[i].second<<std::endl;
            flag=1;
            break;
        }
        while(i<j&&v[i].first+v[j].first<target)
        i++;
        while(i<j&&v[i].first+v[j].first>target)
        j--;
       
        
    }
    if(flag==0)
    std::cout<<"IMPOSSIBLE"<<std::endl;
}