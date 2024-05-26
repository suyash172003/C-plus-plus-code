#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
void permute(int ind,std::string &s,std::vector<std::string> &v)
{
    for(int i=ind;i<s.length();i++)
    {
        std::swap(s[i],s[ind]);
        permute(ind+1,s,v);
        std::swap(s[i],s[ind]);
    }
    v.push_back(s);
    return;
}
int main()
{
    std::string s;
    std::cin>>s;
    std::vector<std::string> v;
    permute(0,s,v);
    std::cout<<v.size();
    for(auto it:v)
    std::cout<<it<<std::endl;
}