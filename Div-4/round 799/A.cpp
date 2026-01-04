// ques  A  round 799 div 4- "marathon"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if(b>a){
            count++;
        }
        if(c>a){
            count++;
        }
        if(d>a){
            count++;
        }
        cout<<count<<"\n";
    }
}