#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
void combination(std::vector<int> &arr,int ind,int target,int count,int &min_element)
{
    
    if(ind<0||target<0)
    return ;
    if(target==0)
    {
        min_element=std::min(count,min_element);
        return ;
    }

    if(arr[ind]<=target)
    combination(arr,ind,target-arr[ind],count+1,min_element);
    combination(arr,ind-1,target,count,min_element);
    return;
}
int main()
{
    int n,target;
    int count=0;
    std::cin>>n>>target;
    std::vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    std::cin>>arr[i];
    int min_element=INT_MAX;
    combination(arr,n-1,target,count,min_element);
    if(min_element==INT_MAX)
    std::cout<<-1;
    else
    std::cout<<min_element;
}