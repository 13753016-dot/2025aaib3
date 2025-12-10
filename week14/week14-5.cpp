// week14-5.cpp
// 昨天 CPE 第1題 UVA 10079
// Pizza Cutting 切Pizza
#include <iostream>
using namespace std;

int main()
{
    int N;
    while ( cin >> N ) {
        if (N < 0) break;
        int ans = 1 + (1 + N) * N / 2;
        cout << ans << endl;//輸入5會跳16,10會跳出56,-100會之街結束
    }
}
