#include <iostream>
int main()
{
    long int t;
    std::cin>>t;
    
    while(t-->0)
    {
        int flag=0;
        long int length;
        std::cin>>length;
        long int arr[length];
        long int i=0;
        while(i<length)
        {
            std::cin>>arr[i];
            i++;
        }
        for(long int i=0;i<length;i++)
        {
            if(i==0&&arr[i]>=arr[i+1])
            {
                flag=1;
                break;
            }
            if(i==length-1&&arr[i-1]<=arr[i])
            {
                flag=1;
                break;
            }
            if(i>0&&i<length-1&&arr[i]%2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        std::cout<<"YES"<<std::endl;
        else
        std::cout<<"NO"<<std::endl;
    }
}