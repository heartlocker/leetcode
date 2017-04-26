#include <iostream>
using namespace std;
 struct ListNode {
        int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

ListNode* reverseKGroup(ListNode* head, int k) {
    if((head==NULL)||k==1)return head;
    int num=0;
    ListNode*prehead=new ListNode(-1);
    prehead->next=head;
    ListNode *cur=prehead,*nex,*pre=prehead;
    while(cur=cur->next)
    num++;
    while(num>k){
        cur=pre->next;
        nex=cur->next;
        for(int i=1;i<k;i++)
        {
            cur->next=nex->next;
            nex->next=pre->next;
            pre->next=nex;
            nex=cur->next;
        }
        pre=cur;
        num-=k;
    }
    return prehead->next;
}

int main() {
    ListNode a(1);

    ListNode *head=&a;
    for (int i =2; i <=5 ; ++i) {
        head->next=new ListNode(i);
        head=head->next;
    }

    head=&a;
    head=reverseKGroup(head,2);
    while(head)
    {
        cout<<head->val<<"->";
        head=head->next;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}