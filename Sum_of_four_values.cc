#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
int main()
{
    int n,x;
    std::cin>>n>>x;
    std::vector<std::pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int m;
        std::cin>>m;
        v.push_back({m,i+1});
    }
    sort(v.begin(),v.end());
    std::set<int> s;
    int flag=0;
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            int k=j+1;
            int m=v.size()-1;
            int sum=x-v[i].first-v[j].first;
            while(k<m)
            {
                if(v[k].first+v[m].first==sum)
                {
                    s.insert(v[i].second);
                    s.insert(v[j].second);
                    s.insert(v[k].second);
                    s.insert(v[m].second);
                    flag=1;
                    break;
                }
                while(k<m&&v[k].first+v[m].first<sum)
                k++;
                while(k<m&&v[k].first+v[m].first>sum)
                m--;
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        break;
    }
    if(flag==0)
    std::cout<<"IMPOSSIBLE"<<std::endl;
    else{
        for(int it:s)
        std::cout<<it<<" ";
    }
}