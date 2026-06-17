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

    ListNode* reverselist(ListNode* head)
    {
        ListNode*temp=head;
        ListNode*prev=nullptr;
        ListNode*front;
        if(head==nullptr || head->next==nullptr)
            return head;
        while(temp)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newHead = reverselist(head);
        int cnt=0;
        ListNode*temp=newHead;
        ListNode* prev=nullptr;
        while(temp!=nullptr)
        {
            cnt++;
            if(n==1)
            {
                temp=temp->next;
                newHead=temp;
                break;
            }
            if(cnt==n)
            {
                prev->next=temp->next;
                temp=prev->next;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        head=reverselist(newHead);
        return head;
    }
};
