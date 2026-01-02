// ques  B  round 827 div 4- "increasing"

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
        sort(a.begin(), a.end());
        bool check=true;
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                check=false;
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
