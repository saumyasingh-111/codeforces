// round 849

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0,j=0;
        cin>>n;
        string s;
        cin>>s;
        bool check=false;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                k--;
            }
            if(s[i]=='R'){
                k++;
            }
            if(s[i]=='U'){
                j++;
            }
            if(s[i]=='D'){
                j--;
            }
            if(k==1&&j==1){
                check=true;
                break;
            }
        }
        if(check){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
    }
}