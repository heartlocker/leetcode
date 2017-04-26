#include <iostream>
#include <map>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
       int size=nums.size();
       int freq=size/2;

       map<int,int> count;
       map<int,int>::iterator iter=count.begin();
       for(int i=0;i<size;i++)
       {
       auto ret=  count.insert({nums[i],1});
       if(!ret.second)
       ret.first->second++;
       }
       for(iter=count.begin();iter!=count.end();iter++)
cout<<iter->first<<"--"<<iter->second<<endl;
       for(iter=count.begin();iter!=count.end();iter++)
       if(iter->second>freq){
       return iter->first;
       }
       return 0;
   }
    int main() {
     std::vector<int> v={3,2,3};
     int i=majorityElement(v);
cout<<"answerL:"<<i<<endl;
     return 0;
   }
