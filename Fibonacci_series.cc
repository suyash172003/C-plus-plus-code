#include <iostream>
const int mod=1e9+7;
int main()
{
    long long int n;
    std::cin>>n;
    long long int prev=0;
    long long int curr=1;
    for(long long int i=1;i<=n;i++)
    {
        long long int sum=prev%mod+curr%mod;
        prev=curr;
        curr=sum;
    }
    std::cout<<prev;
}