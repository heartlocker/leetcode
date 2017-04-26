#include <iostream>
#include <vector>
using namespace std;
 struct ListNode {
         int val;
        ListNode *next;
       ListNode(int x) : val(x), next(NULL) {}
     };
ListNode* mergeKLists(vector<ListNode*>& lists) {
//for(vector<ListNode*>::iterator iter=lists.begin();iter!=lists.end();)
    ListNode result(0);
    ListNode * p=&result;

while(!lists.empty()){
    int max=0,index=0,count=0;
    for(vector<ListNode*>::iterator iter=lists.begin();iter!=lists.end();count++)
    {
        if((*iter)->val>max)
        {
            index=count;
            max=(*iter)->val;
        }

    }
    if(index==0)
        index++;
    if(!lists[index-1]=NULL) {
        p->next = new ListNode(lists[index - 1]->val);
        p=p->next;
        lists[index - 1] = lists[index - 1]->next;
    }
    if(lists[index - 1]==NULL)
        lists.erase(lists.begin()+index-1);

}
    return p;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}