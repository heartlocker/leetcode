#include <iostream>
using namespace std;

  struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        return head;
        ListNode* last=head;
        ListNode* current=head->next;
         if(current->val==last->val)
         {
           last->next=current->next;
         }
         else{
           last=last->next;
         }

        while(current->next)
        {
            current=current->next;
            if(current->val==last->val)
             {
                 last->next=current->next;
             }
             else
             {
                 last->next=current;
                   last=last->next;

             }

        }
        return head;

    }
 int main(int argc, char const *argv[]) {
   ListNode A(1),B(2),C(3),D(4);
   A.next=&B;
   B.next=&C;
   C.next=&D;


    ListNode* p=&A;
  p=deleteDuplicates(p);
    cout<<p->val<<" ";
   while (p->next) {
     p=p->next;
     cout<<p->val<<" ";

   }


   return 0;
 }
