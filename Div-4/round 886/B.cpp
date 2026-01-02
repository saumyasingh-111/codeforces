// round 886 Problem-B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n,mx=-1,idx=-1;
         cin>>n;
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(b>mx&&a<=10){
                mx=b;
                idx=i;
            }
        }
        cout<<idx+1<<"\n";
    }
}