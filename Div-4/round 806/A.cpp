// ques  A  round 806 div 4- "yes or yes"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(char&c:s)c=tolower(c);
        if(s=="yes"){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
}