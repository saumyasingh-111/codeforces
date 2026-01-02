// round 849

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
        string s;
        cin>>s;
        int j=s.length()-1;
        int i=0;
        while(i<j){
            if((s[i]=='0'&&s[j]=='1')||(s[i]=='1'&&s[j]=='0')){
                s.erase(s.begin());
                s.pop_back();
                
                i = 0;             
                j = s.length() - 1;  
            }else{
                break;
            }
        }
        int count=s.length();
        cout<<count<<"\n";
    }
}