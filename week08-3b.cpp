// week08-3b.cpp LeetCode學習計畫 Simulation
// 1275. Find Winner on a Tic Tac Toe Game

class Solution {
public:
    // myPrint() 小幫手的程式刪掉囉
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // 有大括號會自動給0
        int now = 1;      // 1: 玩家A  2: 玩家B
        int winner = 0;   // 0: 尚未分出勝負, 1: A贏, 2: B贏

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now;

            // 判斷四種可能的勝利情況
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now) winner = now; // 直線
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now) winner = now; // 橫線
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now) winner = now; // 斜線 ↘
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now) winner = now; // 斜線 ↙

            // 換玩家
            if (now == 1) now = 2;
            else now = 1;
        }

        // 回傳結果
        if (winner == 1) return "A";              // 玩家A贏
        else if (winner == 2) return "B";         // 玩家B贏
        else if (moves.size() == 9) return "Draw"; // 走滿9步 → 平手
        else return "Pending";                    // 還沒下完 → 未完成
    }
};
