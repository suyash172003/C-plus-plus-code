#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
void subset(std::vector<int> &price,std::vector<int> &pages,int ind,int target,int &max_element,int page)
{
    if(target<0||ind==price.size())
    return;
    max_element=std::max(max_element,page);
    subset(price,pages,ind+1,target-price[ind],max_element,page+pages[ind]);
    subset(price,pages,ind+1,target,max_element,page);
    return;
}
int main()
{
    int n,target;
    std::cin>>n>>target;
    std::vector<int> price(n,0);
    std::vector<int> pages(n,0);
    for(int i=0;i<n;i++)
    std::cin>>price[i];
    for(int i=0;i<n;i++)
    std::cin>>pages[i];
    int max_element=INT_MIN;
    int page=0;
    subset(price,pages,0,target,max_element,page);
    std::cout<<max_element<<std::endl;
}