// week11-2.cpp 厩策璸礶 Math 材2肈
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        //int total = 0;
        double total = 0; // 璶Τ计翴
        int M = salary[0], m = salary[0];
        for (int i = 0; i < salary.size(); i++) {
            total += salary[i];
            if (salary[i] > M) M = salary[i]; // 
            if (salary[i] < m) m = salary[i]; // 
        }

        // 硂琌岿!!! 簗р程程奔
        return (total - M - m) / (salary.size() - 2);
    }
};
