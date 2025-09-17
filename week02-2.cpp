/// week02-2.cpp C++
/// 用C++字串 反過來
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "請輸入字串: ";
    string a, ans;  /// C++的字串
    cin >> a;       /// 輸入字串
    /// 倒過來的迴圈，字串的長度設a.length()

    for(int i = a.length() - 1; i >= 0; i--) {
        ans += a[i];  /// 把字母倒過來放入答案
    }

    cout << a << " 倒過來是 " << ans << endl;
}
