#include <iostream>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode** t1 = &head, *t2 = head;
    for(int i = 1; i < n; ++i)
    {
        t2 = t2->next;
    }
    while(t2->next != NULL)
    {
        t1 = &((*t1)->next);
        t2 = t2->next;
    }
    *t1 = (*t1)->next;
    return head;

}
int main() {
    ListNode input(1);
    ListNode* head=removeNthFromEnd(&input,1);
   while(head!=NULL)
   {
       cout<<head->val<<" ";
        head=head->next;
   }
    return 0;
}