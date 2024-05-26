#include <iostream>
using namespace std;
const int N=1e7;
int arr[N];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]<=0)
        {
            count+=arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }
    }
    cout<<count;
}