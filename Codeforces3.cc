#include <iostream>
#include <string>
int main()
{
    long int t;
    std::cin>>t;
    while(t-->0)
    {
        long int count=0;
        long int len;
        std::string s;
        std::cin>>len>>s;
        for(long int i=0;i<len-2;i++)
        {
            if(s.substr(i,3)=="map"||s.substr(i,3)=="pie")
            count++;
        }
        std::cout<<count<<std::endl;
    }
}