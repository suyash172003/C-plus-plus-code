#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        s.insert(m);
    }
    cout<<s.size();
}