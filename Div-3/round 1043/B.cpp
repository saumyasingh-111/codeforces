// the secret number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> ans;
        long long p=10;
        while(true){
            long long div=1+p;
            if(div>n){
                break;
            }
           if(n%div==0){
            ans.push_back(n/div);   
           }
           p*=10;
        }
        if(ans.empty()){
            cout<<0<<"\n";
        }
        else{
            sort(ans.begin(),ans.end());
            cout<<ans.size()<<"\n";
            for(long long x:ans){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
}