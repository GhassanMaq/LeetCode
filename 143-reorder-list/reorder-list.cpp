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
    void reorderList(ListNode* head) {
        vector <int> v;
        ListNode *h=head;
        while(h){
            v.push_back(h->val);
            h=h->next;
        }
        int size=v.size();
        for (int i=0;i<size/2;i++){
            head->val=v[i];
            head=head->next;
            head->val=v[size-i-1];
            head=head->next;
        }
        if(size%2) head->val=v[size/2];
    }
};