// https://www.codechef.com/problems/SHOM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // your code goes here
    int l, r;
    cin >> l >> r;
   if(l>r){
       cout<<l-r;
   }else{
       cout<<r-l;
   }
}