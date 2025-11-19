// week08-3a.cpp LeetCode 學習計畫 Simulation
// 1275. Find Winner on a Tic Tac Toe Game
// 看起來是 3x3 陣列, 所以開 int[3][3] = {}陣列 再用
class Solution {
public:
    void myPrint(int a[3][3]) { // 小幫手, 幫我們印出來
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // 有大括號, 會給0
        int now = 1;      // 1: 玩家A 第1個玩家   2: 玩家B 第2個玩家

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now; // 放上目前玩家的記號

            myPrint(a); // 把陣列印出來!!! 我們的小幫手

            if (now == 1) now = 2; // A 下完後換 B
            else now = 1;          // B 下完後換 A
        }

        return "A"; // 先隨便 return 啦!
    }
};
