// week08-6.cpp
// FB刮柑Τ程穝癵 6714 ╰盽计计堵瑌
// Input: 4计计ぃ狡
// 程 - 程 = 穝计

#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int myMin(int n) {
    vector<int> a;
    for (int i = 0; i < 4; i++) {
        a.push_back(n % 10);
        n = n / 10;
    }
    sort(a.begin(), a.end());
    return a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
}

int myMax(int n) {
    vector<int> a;
    for (int i = 0; i < 4; i++) {
        a.push_back(n % 10);
        n = n / 10;
    }
    sort(a.begin(), a.end());
    return a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
}

int main() {
    cout << "叫块4计(计ぃ滦):";
    int n;
    cin >> n;

    for (int i = 0; i < 7; i++) {
        int M = myMax(n), m = myMin(n);
        n = M - m;
        printf("%d - %d = %d\n", M, m, n);
    }
}
