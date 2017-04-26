#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int sum=0;
    ListNode *pNode=new ListNode(0);
    ListNode* head=pNode;
    while(l1!=NULL||l2!=NULL)
    {
        sum/=10;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum+=l2->val;
            l2=l2->next;
        }

        pNode->next=new ListNode(sum%10);
        pNode=pNode->next;
    }
    if(sum>=10){
        pNode->next=new ListNode(1);

    }
    return head->next;
}
int main() {
//    ListNode a1(2),a2(4),a3(3);
//    ListNode b1(5),b2(6),b3(4);
//    a1.next=&a2;
//    a2.next=&a3;
//    b1.next=&b2;
//    b2.next=&b3;

    ListNode a1(1),a2(8);
    ListNode b1(0);
    a1.next=&a2;



   ListNode* result=addTwoNumbers(&a1,&b1);
    while(result!=NULL)
    {
        cout<<result->val<<" | ";
        result=result->next;
    }
    return 0;
}