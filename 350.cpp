#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        cout<<"?>"<<endl;
            for(int i=0,j=0;j<nums2.size()&&i<nums1.size();)
            {
                if(nums2[j]<nums1[i])
                {
                  cout<<" i="<<i<<" j="<<j<<endl;

                    j++;
                }
                else if(nums2[j]==nums1[i])
                {result.push_back(nums1[i]);
                  i++;
                  j++;
                }
                else
                i++;
            }

    return result;
    }


int main() {
  std::vector<int> v1={1,2,2,1};
  vector<int> v2={2,2};
  std::vector<int> r;
  r=intersect(v1,v2);
  for (int i =0; i < r.size(); i++) {
    cout<<r[i]<<" ";
  }
  return 0;
}
