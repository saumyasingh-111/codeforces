// round 886 Problem-A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)>=10){
            cout<<"yes"<<"\n";
        }else if((c+b)>=10){
            cout<<"yes"<<"\n";
        }else if((a+c)>=10){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }
}