// round 871 Problem - B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int curr=0,mx=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==0){
                curr++;
                mx=max(mx,curr);
            }else{
                curr=0;
            }
        }
        cout<<mx<<"\n";
    }
}