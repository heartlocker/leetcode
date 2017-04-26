#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int count=0;
    for(int i=0;i<nums.size();i++)
        if(nums[i]!=val)
            nums[count++]=nums[i];
    int n=nums.size()-count;
    while(n){nums.pop_back(); n--;}

    return count;
}
int main() {
     vector<int> num={3,2,2,3};
    int res=removeElement(num,3);
    for(auto c:num)
        cout<<c<<" ";
    cout<<endl<<"res="<<res;

    return 0;
}