#include <iostream>
#include <vector>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;

     ListNode(int x) : val(x), next(NULL) {}
 };
ListNode* reverseBetween(ListNode* head, int m, int n) {
    ListNode* front=head,*second=NULL;
    for (int i = 0; i <m-1 ; ++i) {
        front=front->next;
    }
    second=front;
    for (int j = 0; j <n-m; ++j) {
        second=second->next;
    }
    int temp=front->val;
    front->val=second->val;
    second->val=temp;
    return head;

}
int main() {
    ListNode a(1);
    ListNode*p=&a;
    for (int i = 2; i < 5; ++i) {

        p->next=new ListNode(i);
        p=p->next;
    }

    //    while(p){
//        cout<<p->val<<" ";
//    p=p->next;
//    }
    p=&a;
    ListNode *r=reverseBetween(p,1,4);
    while(r){
        cout<<r->val<<" ";
    r=r->next;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}