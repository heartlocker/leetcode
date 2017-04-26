#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<int>& boxes,int memo[100][100][100], int l,int r,int k){
    if (l>r) return 0;
    if (memo[l][r][k]!=0) return memo[l][r][k];

    while (r>l && boxes[r]==boxes[r-1]) {r--;k++;}
    memo[l][r][k] = dfs(boxes,memo,l,r-1,0) + (k+1)*(k+1);
    for (int i=l; i<r; i++){
        if (boxes[i]==boxes[r]){
            memo[l][r][k] = max(memo[l][r][k], dfs(boxes,memo,l,i,k+1) + dfs(boxes,memo,i+1,r-1,0));
        }
    }
    return memo[l][r][k];
}
int removeBoxes(vector<int>& boxes) {
    int n=boxes.size();
    int memo[100][100][100] = {0};
    int res=dfs(boxes,memo,0,n-1,0);

    return res;
}
int main() {
    vector<int> input={1,3,2,2,2,3,4,3,1};

    std::cout <<endl<< removeBoxes(input)<< std::endl;
    return 0;
}