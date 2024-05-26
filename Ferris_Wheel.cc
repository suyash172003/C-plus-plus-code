#include <iostream>
#include <string>
#include <vector>
using namespace std;
void subsequence(int ind,vector<string> arr,string &ans,string s,int &count)
{
    if(ind>=arr.size())
    {
        if(ans==s)
        {
            count=count+1;
            cout<<ans;
        }
        return;
    }
    subsequence(ind,arr,ans+arr[ind],s,count);
    subsequence(ind,arr,ans,s,count);
    return;
}
int main()
{
    vector<string> arr;
    string s;
    int k;
    cin>>s;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        string m;
        cin>>m;
        arr.push_back(m);
    }
    int count=0;
    string ans="";
    subsequence(0,arr,ans,s,count);
    cout << count;
}