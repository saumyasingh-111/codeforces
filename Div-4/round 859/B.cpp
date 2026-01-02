// round 859 Problem - B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,even=0,odd=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even+=a[i];
            }else{
                odd+=a[i];
            }
        }
        if(even>odd){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
        
    }
}