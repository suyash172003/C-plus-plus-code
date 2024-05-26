#include <iostream>
#include <string>
using namespace std;
bool check(string s,int i,int j,string m)
{
    int p=0;
    for(int k=i;k<j;k++)
    {
        if(s[k]!=m[p++])
        return false;
    }
    return true;
}
int main()
{
    string s,m;
    cin>>s;
    cin>>m;
    int count=0;
    if(s.length()>=m.length())
    {
    for(int i=0;i<=s.length()-m.length();i++)
    {
        if(s[i]==m[0]&&check(s,i,i+m.length(),m))
        count++;
    }
    }
    cout<<count;
}