// ques A  round 835 div 4- atilla's favourite problem

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
        vector<char> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        char mx = *max_element(s.begin(), s.end());
        int pos = mx-'a'+1;
        cout<<pos<<"\n";
    }
}
