// https://www.codechef.com/problems/RECSQ

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // your code goes here
    int a, b, c, area1, area2;
    cin >> a >> b >> c;
    area1 = a * b;
    area2 = c * c;
    if (area1 == area2) {
        cout << "yes";
    } else {
        cout << "no";
    }
}