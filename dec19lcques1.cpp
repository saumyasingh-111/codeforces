// 2965. Find Missing and Repeated Values

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int total=n*n;

        vector<int> freq(total + 1, 0);
         
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }

        int repeating=-1, missing=-1;

        for(int i=1;i<=total;i++){
            if(freq[i]==2){
                repeating=i;
            }
            else if(freq[i]==0){
                missing=i;
            }
        }
         return {repeating, missing};
    }
}
}