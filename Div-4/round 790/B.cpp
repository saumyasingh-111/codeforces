// B  round 790 div 4 "equal candies"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int diff=0,sum=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mn=*min_element(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]>mn){
                diff=a[i]-mn;
                sum+=diff;
            }
        }
        cout<<sum<<"\n";
    }
}