// week12-3.cpp 學習計畫 Math 第4題
// LeetCode 976. Largest Perimeter Triangle
// 要用 nums 裡的棒子長度，組合出「三角形」兩邊和第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // 排序（又快又好）

        for (int i = nums.size() - 1; i >= 2; i--) {  // 從大到小試
            if (nums[i] < nums[i - 1] + nums[i - 2])  // 能形成三角形
                return nums[i] + nums[i - 1] + nums[i - 2];  // 回傳周長
        }

        return 0;  // 找不到合適的三角形
    }
};
