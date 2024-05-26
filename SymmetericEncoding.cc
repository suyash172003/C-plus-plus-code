#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t-->0){
        string s;
        string ans;
        unordered_map<char,char> map;
        set<char> st;
        long int size;
        cin>>size>>s;
        for(long int i=0;i<size;i++){
            st.insert(s[i]);
        }
    
        for(auto it:st){
            ans=ans+it;
        }
        for(long int i=0;i<=st.size();i++)
        {
            map[ans[i]]=ans[st.size()-1-i];
        }
        for(long int i=0;i<size;i++){
            s[i]=map[s[i]];
        }
        cout<<s<<endl;
        }
    }
