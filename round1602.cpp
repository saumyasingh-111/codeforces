// Codeforces Round 1062 div-4
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// A-Square?
void square(){
bool sq(int a,int b,int c,int d){
    return (a==b&&b==c&&c==d);
  }
    int t;
    cin>>t;
    while(t--){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
        if(sq(a,b,c,d)){
            cout<<"yes\n";
        }else{
        cout<<"no\n";}
    }
    
}

// B-Your Name
void yourname(){
 int q;
    cin >> q;
    cin.ignore();
 
    while(q--) {
        int n;
        cin >> n;
        cin.ignore();
 
        string line;
        getline(cin, line);
        stringstream ss(line);
        string s, t;
        ss >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
 
        if(s == t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
// C-Isamatdin and His Magic Wand!
bool magic(){
    int t; 
    cin >> t;
    while (t--) {
        
        int n;
        cin >> n;
        bool odd = false, even = false;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) even = true;
            else odd = true;
        }
        if (odd and even) sort(a, a + n);
        for (int i = 0; i < n; ++i) cout << a[i] << " \n"[i == n - 1]; 
    }
}

// D-Yet Another Array Problem
int array(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        // if any element is 1, answer is 2
        bool hasOne = false;
        for (long long x : a) {
            if (x == 1) {
                hasOne = true;
                break;
            }
        }
        if (hasOne) {
            cout << 2 << "\n";
            continue;
        }
        for (long long x = 2; ; x++) {
            bool ok = false;
            for (int i = 0; i < n; i++) {
                if (std::gcd(a[i], x) == 1) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                cout << x << "\n";
                break;
            }
        }
    }
}


int main(){

}