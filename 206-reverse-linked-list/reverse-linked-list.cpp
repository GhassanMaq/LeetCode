/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        stack <int> nums;
        while(head){
            nums.push(head->val);
            head=head->next;
        }
        ListNode *newHead = new ListNode(nums.top());
        nums.pop();
        ListNode *tail = newHead;
        while(!nums.empty()){
            tail->next=new ListNode(nums.top());
            nums.pop();
            tail=tail->next;
        }
        tail->next = nullptr;
        return newHead;
    }
};