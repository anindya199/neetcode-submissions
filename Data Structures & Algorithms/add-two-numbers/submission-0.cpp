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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1!=NULL && l2==NULL)
        return l1;
    if(l2!=NULL && l1==NULL)
        return l2;
    if(l1==NULL && l2==NULL)
        return NULL;

    int sum=0;
    int cy=0;

    ListNode* head1=l1;
    ListNode* head2=l2;

    ListNode*ans=new ListNode();
    ListNode*temp=ans;
    sum=head1->val+head2->val;
    cy=sum/10;
    ans->val=sum%10;
    
    head1=head1->next;
    head2=head2->next;

    
    while(head1!=NULL && head2!=NULL)
    {
        sum=cy+head1->val+head2->val;
        ListNode*n=new ListNode();
        
        cy=sum/10;
        n->val=sum%10;
        temp->next=n;
        temp=temp->next;
        
        head1=head1->next;
        head2=head2->next;
    }

    while(head1!=nullptr)
    {
        sum=cy+head1->val;
        ListNode*n=new ListNode();
        
        cy=sum/10;
        n->val=sum%10;
        temp->next=n;
        temp=temp->next;
        
        head1=head1->next;
    }

    while(head2!=nullptr)
    {
        sum=cy+head2->val;
        ListNode*n=new ListNode();
        
        cy=sum/10;
        n->val=sum%10;
        temp->next=n;
        temp=temp->next;
        
        head2=head2->next;
    }
    if(cy==1){
        ListNode* n=new ListNode(cy);
        temp->next=n;
    }
    return ans;
    }
};
