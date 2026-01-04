// ques  B  round 817 div 4- "Colourblindness"

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
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]=='G'){
                'B'=a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]=='G'){
                'B'=b[i];
            }
        }
        bool check=true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                check=false;
            }
        }
        if(check){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
}