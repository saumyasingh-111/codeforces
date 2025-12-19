// ques 4 B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int w = 0;

        int s[2] = {a1, a2};
        int sb[2] = {b1, b2};

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                int sw = 0, bw = 0;

                if(s[i] > sb[j]) sw++;
                else if(sb[j] > s[i]) bw++;

                if(s[1-i] > sb[1-j]) sw++;
                else if(sb[1-j] > s[1-i]) bw++;

                if(sw > bw) w++;
            }
        }

        cout << w << "\n";
    }
    return 0;
}
