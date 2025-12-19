136. Single Number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int x : nums){
            ans ^= x;
        }
        return ans;
    }
};
}