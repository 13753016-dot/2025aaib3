// week14-2.cpp 學習計畫 Linked List 第2題
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if (head==nullptr || head->next==nullptr) return head; // 終止條件

        ListNode* ans = reverseList(head->next); // 右邊反過來的答案

        head->next->next = head; // 看左圖, 1的下一個是2, 的下一個, 要指回1
        head->next = nullptr;    // 接下來, 1的下一個要收起來

        return ans;
    }
};
