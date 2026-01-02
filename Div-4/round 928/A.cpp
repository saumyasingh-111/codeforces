// round 928 A 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a=0,b=0;
        string s;
        cin>>s;
        for(char ch:s){
            if(ch=='A'){
                a++;
            }else{
                b++;
            }
        }
        if(a>b){
            cout<<"A"<<"\n";
        }else{
            cout<<"B"<<"\n";
        }
    }
}