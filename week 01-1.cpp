// LeetCode �ǲ߭p�e �j�����w �b haystack ��� needle
// 28. Find the Index of the First Occurrence in a String

class Solution {
public:
    int strStr(string haystack, string needle) {
        // �n�ΰj��, ��Ҧ��i�઺��m,����L�@��
        // ex. sadbutsad �����L �n��sad
        // i:0 sad  �� haystack �ūe��n�Ӧr��
        //     sad
        // i:1 sad
        //     abd
        // i:2 sad
        //     bdu
        int H = haystack.length(), N = needle.length();
        for(int i = 0;i <= H; i++){
            if ( haystack.substr(i, N) == needle) return i;
            // �qi�}�l,�ťXN�Ӧr�� ���M�ۦP ��쵪��!!!
        }
        return -1;//�S��쵪��
    }
}

