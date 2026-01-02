// round 971

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<string> rows(n);
        for(int i = 0; i < n; i++){
            cin >> rows[i];
        }

        for(int i = n - 1; i >= 0; i--){
            for(int j = 0; j < 4; j++){
                if(rows[i][j] == '#'){
                    cout << j + 1 << " ";
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
