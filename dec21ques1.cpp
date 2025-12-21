// ques 1 A round 952 div-4

#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin >> a >> b;
       string a1 = a.substr(1);
       string b1 = b.substr(1);
        a1.insert(a1.begin(), b[0]);
        b1.insert(b1.begin(), a[0]);
        cout<<a1<<" "<<b1<<"\n";
    }
}