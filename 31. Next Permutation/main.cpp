#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
int size=nums.size();

    int j=size-2;
    for (; j >=0 ;j--) {
        int i=size-1;
        while(j<i){
            if(nums[j]<nums[i]){
                swap(nums[j],nums[i]);
                j++;
                int end=size-1;
                while(j<end)swap(nums[j++],nums[end--]);
                return;
            }
            i--;
        }
    }
    int i=0;
    j=size-1;
    while(i<j)swap(nums[i++],nums[j--]);
    return;

}

int main() {
    vector <int> input={5,4,7,5,3,2};
    nextPermutation(input);
    for(int x:input) cout<<" "<<x;
    return 0;
}