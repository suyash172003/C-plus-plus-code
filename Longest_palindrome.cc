#include <iostream>
#include <string>
#include <set>
void ispermute(int i,int j,std::string s,std::string &s1)
{
    while(i>=0&&j<s.length())
    {
        if(s[i]!=s[j])
        return;
        if(s.substr(i,j-i+1).length()>s1.length())
        s1=s.substr(i,j-i+1);
        i--;
        j++;
    }
    return;
}
int main(){
  std::string s;
  std::cin>>s;
  std::string s1;
  for(int i=0;i<s.length();i++)
  {
    ispermute(i,i,s,s1);
    ispermute(i,i+1,s,s1);
  } 
  std::cout<<s1;
}