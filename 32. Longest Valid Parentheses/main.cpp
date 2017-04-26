#include <iostream>
#include <stack>
#include <string>
using namespace std;
int longestValidParentheses(string s) {
    int n=s.length(),longest=0;
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='(')st.push(i);
        else
        {
            if(!st.empty()) {
                if (s[st.top()]=='(') st.pop();
                else st.push(i);
            }
            else st.push(i);
        }
    }
    if (st.empty()) return  n;
    int a=0,b=n;
      while (!st.empty())
      {
          a=st.top();
          longest=max(longest,b-a-1);
          st.pop();
          b=a;
      }
    longest=max(longest,b);
    return longest;
}
int main() {
    string input=")()";
    std::cout << longestValidParentheses(input) << std::endl;
    return 0;
}