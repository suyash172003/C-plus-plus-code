#include <iostream>
#include <cmath>
#include <string> 

using namespace std;
int main()
{
    string s;
    cin>>s;
    s=s+"M";
    char prev=s[0];
    int count=0;
    int max_element=0;
    for(int i=0;i<s.length();i++)
    {
        if(prev==s[i])
        count++;
        else{
            max_element=max(count,max_element);
            count=0;
            prev=s[i];
            i--;
        }
    }
    cout<<max_element;
}