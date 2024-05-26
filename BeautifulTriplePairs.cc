#include <iostream>
int mod =10^9;
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t-->0){
        long int size;
        cin>>size;
        long int a[size];
        long int ans=0;
        for(long int i=0;i<size;i++)
        {
            cin>>a[i];
        }
        for(long int i=0;i<size-2;i++)
        {
            long int count=0;
            if(a[i]==a[i+1])
            count++;
            if(a[i+1]==a[i+2])
            count++;
            if(a[i+2]==a[i+3])
            count++;
            if(count == 2)
            ans++;
        }
        cout<<ans<<endl;
    }
}