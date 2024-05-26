#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
const int N=1e7;
long int arr[N];
int main()
{
    int n;
    cin>>n;
    for(long int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        arr[i]=m;
    }
    long int sum=0;
    long int max_element=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        max_element=max(sum,max_element);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<max_element;
}