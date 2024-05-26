#include <iostream>
#include <vector>
#include <string>
int main()
{
    int t,a,b;
    std::cin>>t;
    std::vector<std::string> ans;
    while(t-->0)
    {
        std::cin>>a>>b;
        if((a+b)%3==0)
        ans.push_back("YES");
        else
        ans.push_back("NO");
    }
    for(auto &it:ans)
    std::cout<<it<<std::endl;
}