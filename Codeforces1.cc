#include <iostream>
#include <algorithm>
#include <cmath>
int main()
{
    long int t;
    std::cin>>t;
    while(t-->0)
    {
        int first,second,target;
        std::cin>>first>>second>>target;
        long int first_arr[first];
        long int second_arr[second];
        for(int i=0;i<first;i++)
        std::cin>>first_arr[i];
        for(int i=0;i<second;i++)
        std::cin>>second_arr[i];

        std::sort(first_arr,first_arr+first);
        std::sort(second_arr,second_arr+second);
        int i=0,count=0;
        while(i<first)
        {
            int j=0;
            while(j<second)
            {
                if(first_arr[i]+second_arr[j]<=target)
                count++;
                j++;
            }
            i++;
        }
        std::cout<<count<<std::endl;
    }
}