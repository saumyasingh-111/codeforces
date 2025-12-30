// round 898 Problem - A

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
    if(s=="bac"){
        cout<<"yes"<<"\n";
    }else if(s=="cab"){
        cout<<"no"<<"\n";
    }else if(s=="cba"){
        cout<<"yes"<<"\n";
    }else if(s=="abc"){
        cout<<"yes"<<"\n";
    }else if(s=="acb"){
        cout<<"yes"<<"\n";
    }else if(s=="bca"){
        cout<<"no"<<"\n";
    }
}
}