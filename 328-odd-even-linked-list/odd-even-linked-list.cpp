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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenHead=head->next;
        ListNode* curr=odd;
        int i=1;
        while (curr){
            if(i>2 && i%2!=0) {
                odd->next=curr;
                odd=odd->next;
            }
            else if(i>2 && i%2==0){
                even->next=curr;
                even=even->next;
            }
            curr=curr->next;
            i++;
        }
        even->next=nullptr;
        odd->next=evenHead;
        return head;
    }
};