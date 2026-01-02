// A  round 835 div 4 medium number

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
        if(a>b&&a>c){
            if(b<c){
                cout<<c<<"\n";
            }
            if(c<b){
                cout<<b<<"\n";
            }
        }
        if(b>a&&b>c){
            if(a<c){
                cout<<c<<"\n";
            }
            if(c<a){
                cout<<a<<"\n";
            }
        }
        if(c>a&&c>b){
            if(b<a){
                cout<<a<<"\n";
            }
            if(a<b){
                cout<<b<<"\n";
            }
        }
    }
}   
