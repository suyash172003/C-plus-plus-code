#include <iostream>
#include <algorithm>
int main(){
    int t;
    std::cin>>t;
    while(t-->0)
    {
        int n,k;
        std::cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        std::cin>>a[i];
        int i=1,j=2;
        int count=0;
        if(k!=1)
        std::swap(a[1],a[k]);
        while(i>=0&&j<n)
        {
            if(a[i]<a[j])
            {
                i--;
                j++;
            }
            else{
                i=j-1;
                j++;
            }
            count++;

        }
        std::cout<<count<<std::endl;
    }
}