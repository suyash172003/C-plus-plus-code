#include <iostream>

bool palin(int l,int r,std::string s)
{
    while(l<r)
    {
        if(s[l-1]!=s[r-1])
        return false;
        l++;
        r--;
    }
    return true;
}
int main()
{
    int t;
    std::cin>>t;
    while(t-->0)
    {
        int n,q;
        std::string s;
        int sum=0;
        std::cin>>n>>q>>s;
        for(int i=0;i<q;i++)
        {
            int l,r;
            std::cin>>l>>r;
            std::cout<<std::boolalpha<<palin(l,r,s)<<std::endl;
            if(palin(l,r,s)==false)
            sum=sum+r-l+1;
        }
        std::cout<<sum<<std::endl;
    }
    
}