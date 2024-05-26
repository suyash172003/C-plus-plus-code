#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
void subset(int ind,std::vector<int> &v,int &min_element,int sum,int total)
{
    if(ind>=v.size()-1)
    {
         min_element=std::min(min_element,std::abs(total-sum));
         return ;
    }
    subset(ind+1,v,min_element,sum+v[ind],total);
    subset(ind+1,v,min_element,sum,total);
    return ;
}
int main()
{
    int n;
    int min_element=INT_MAX;
    std::cin>>n;
    std::vector<int> v;
    int total=0;
    for(int i=0;i<n;i++)
    {
        int m;
        std::cin>>m;
        v.push_back(m);
        total+=m;
    }
    int sum=0;
    subset(0,v,min_element,sum,total);
    std::cout<<min_element<<std::endl;
} 