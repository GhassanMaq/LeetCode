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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merged=new ListNode();
        ListNode *mergedHead=merged;
        if(!list1&&!list2) return  nullptr;
        while(list1 && list2){
            if(list1->val > list2->val){
            merged->next=list2;
            list2=list2->next;
            }
            else {merged->next=list1;
            list1=list1->next;}
            merged = merged->next;
        }
        if (list1) {
            merged->next = list1;
        } else if (list2) {
            merged->next = list2;
        }
        return mergedHead->next;
    }
};