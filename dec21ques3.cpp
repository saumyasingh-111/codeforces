// ques 3 A  round 944 div 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<"\n";
    }
}