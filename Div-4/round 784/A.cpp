// ques  A  round 784 div 4- "division"

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
        if(1900<=n){
            cout<<"Division 1\n";
        }
        else if(1600<=n && n<=1899){
            cout<<"Division 2\n";
        }
        else if(1400<=n && n<=1599){
            cout<<"Division 3\n";
        }
        else if(n<=1399){
            cout<<"Division 4\n";
        }
    }
}