#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int sum=1;
    for(long long int i=1;i<=n;i++)
    {
        sum=sum*i*1ll;
    }
  
    long long int count=0;
    while(sum%10==0)
    {
        count++;
        sum=sum/10;
    }
    cout << count;
}