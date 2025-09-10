// week01-4b.cpp 使用 C++ 語言 處理
#include <iostream> // 使用 C++ 語言 函式庫
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;   // C++語言 讀資料
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) ans += i;
    }
    cout << ans;  // C++語言 輸資料
}

