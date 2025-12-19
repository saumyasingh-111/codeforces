// ques 3 A 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,dig;
        cin>>n;
        dig=n%10;
        n/=10;
        int sum=n+dig;
        cout<<sum<<"\n";
    }
}