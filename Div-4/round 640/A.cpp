// ques  A  round 640 div 4- "sum of round numbers"

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
        int place=1;
        vector<int> b;
        while(n>0){
            int dig=n%10;
           if(dig!=0){
                b.push_back(dig*place);
           }
            n/=10;
            place*=10;
        }
        cout<<b.size()<<"\n";
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}