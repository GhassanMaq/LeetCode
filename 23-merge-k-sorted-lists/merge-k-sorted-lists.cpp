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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;  
        ListNode *head = nullptr;
        ListNode *temp = nullptr;
        while(true) {
            int p = -1;
            for(int i = 0; i < lists.size(); i++) {
                if(lists[i] != nullptr && (p == -1 || lists[i]->val < lists[p]->val)) {
                    p = i;
                }
            }
            if(p == -1) {
                break;
            }
            if(head == nullptr) {
                head = lists[p];
                temp = head;
            } else {
                temp->next = lists[p];
                temp = temp->next;
            }
            lists[p] = lists[p]->next;
        }
        return head;  
    }
};
