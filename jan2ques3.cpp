// ques A  round 827 div 4- sum

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
        bool check=false;
        if(a+b==c){
            check=true;
        }
        else if(a+c==b){
            check=true;
        }
        else if(b+c==a){
            check=true;
        }  
        if(check){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }
}
