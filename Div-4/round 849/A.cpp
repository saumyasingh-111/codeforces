// / round 849

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s="codeforces";
        char c;
        cin>>c;
        bool check=false;
        for(int i=0;i<10;i++){
            if(c==s[i]){
               check=true;
               break;
            }
        }
        if(check){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }
}