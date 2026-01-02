// round 918 B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int counta=0,countb=0,countc=0;
        for(int i=0;i<3;i++){
            string s;
            cin>>s;
            for(char ch:s){
                if(ch=='A'){
                    counta++;
                }else if(ch=='B'){
                    countb++;
                }else if(ch=='C'){
                    countc++;
                }
            }
        }
        
       
        if(counta==2){
            cout<<'A'<<"\n";
        }else if(countb==2){
            cout<<'B'<<"\n";
        }else if(countc==2){
            cout<<'C'<<"\n";
        }
    }
}