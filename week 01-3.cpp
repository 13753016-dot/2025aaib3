// week01-4b.cpp �ϥ� C++ �y�� �B�z
#include <iostream> // �ϥ� C++ �y�� �禡�w
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;   // C++�y�� Ū���
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) ans += i;
    }
    cout << ans;  // C++�y�� ����
}

