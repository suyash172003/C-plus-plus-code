#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <array>
#include <vector>
#include <cstring>

int main()
{
    std::string s;
    std::string ans;
    std::cin>>s;
    std::string ch(s.length(),'\0');
    std::vector<bool> vis(s.length(), false);
    std::unordered_map<char,int> map;
    for(auto it:s)
        map[it]++;
    int index=0;
    int flag=0;
    for(auto it:map)
    {
        int p=it.second;
        while(p>0)
        {
            if(p%2!=0)
            {
                if(vis[s.length()/2]==true)
                {
                    std::cout<<"NO SOLUTION"<<std::endl;
                    flag=1;
                    break;
                }
                ch[s.length()/2]=it.first;
                vis[s.length()/2]=true;
                p=p-1;
            }
            else{
                if(vis[index]==true||vis[s.length()-index-1]==true)
                {
                    std::cout<<"NO SOLUTION"<<std::endl;
                    flag=1;
                    break;
                }
                ch[index]=it.first;
                vis[index]=true;
                ch[s.length()-index-1]=it.first;
                vis[s.length()-index-1]=true;
                index++;
                p=p-2;
            }
            
        }
        if(flag==1)
        break;
    }
    if(flag!=1)
    std::cout<<ch;
}