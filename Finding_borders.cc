#include <iostream>
#include <string>
bool check(int i,int j,std::string s)
{
   while(i>=0)
   {
        
        if(s[i]!=s[j])
        return false;
        i--;
        j--;
   }
   return true;
}
int main()
{
    std::string s;
    std::cin>>s;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[s.length()-1]&&check(i,s.length()-1,s))
        {
            std::cout<<i+1<<" ";
        }
    }
}