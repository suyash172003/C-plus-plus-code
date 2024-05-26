#include <iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t-->0)
    {
        int n;
        std::string s;
        std::cin>>n>>s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            count++;
        }
        if(count%2==0)
        std::cout<<"YES"<<std::endl;
        else
        std::cout<<"NO"<<std::endl;
    }
}