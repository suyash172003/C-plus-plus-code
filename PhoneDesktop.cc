#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int ans=0;
        int first=0;
        int x,y;
        cin>>x>>y;
        int count=0;
        while(y>0){
            y=y-2;
            if(y<0)
            count=1;
            first++;
        }
        
        int remaining = 0; 
        if(count == 1)
        {
            remaining=(first*15)-((first-1)*8)- 4;
        }
        else
        {
            remaining=(first*15)-(first*8);
        }
        x=x-remaining;
        if(x<0)
        cout<<first<<endl;
        else{
            while(x>0){
                first++;
                x=x-15;
            }
            cout<<first<<endl;
        }
    }
}
