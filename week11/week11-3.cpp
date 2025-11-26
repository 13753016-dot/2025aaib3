class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1; // 字串尾端
        vector<int> ans;  // 用來存加法的每位（反著加入）
        int carry = 0;    // 進位

        while (i >= 0 || j >= 0) { // 一直加到兩字串用完
            int now = carry;       // 從進位開始

            if (i >= 0) {         // a 的位數還可以加
                now += a[i] - '0';
                i--;
            }
            if (j >= 0) {         // b 的位數還可以加
                now += b[j] - '0';
                j--;
            }

            ans.push_back(now % 2); // 加法後的當前位
            carry = now / 2;        // 新的進位
        }

        if (carry > 0) ans.push_back(carry); // 如果最後還有進位，加回來

        // 把答案反過來變成字串
        string strAns = "";
        for (int i = ans.size() - 1; i >= 0; i--) {
            strAns += (char)(ans[i] + '0');
        }

        return strAns;
    }
};
