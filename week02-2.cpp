/// week02-2.cpp C++
/// ��C++�r�� �ϹL��
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "�п�J�r��: ";
    string a, ans;  /// C++���r��
    cin >> a;       /// ��J�r��
    /// �˹L�Ӫ��j��A�r�ꪺ���׳]a.length()

    for(int i = a.length() - 1; i >= 0; i--) {
        ans += a[i];  /// ��r���˹L�ө�J����
    }

    cout << a << " �˹L�ӬO " << ans << endl;
}
