#include <iostream>
#include <string>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string prefix ="";
    int minLength =strs[0].size();
    for (int k = 0; k < strs.size(); ++k)
        if (strs[k].size() <=minLength)
        {
            minLength = strs[k].size();
             prefix=strs[k];
        }
    for (int i = 1; i < strs.size(); ++i)
    {
        for (int j = 0; j <=minLength; ++j)
        {
            if (prefix[j] != strs[i][j])
            {
                prefix=prefix.substr(0, j);
                break;
            }
        }
    }

    return prefix;
}
int main() {

    vector<string> input;
    input.push_back("A");
    input.push_back("A");
//    input.push_back("ABCDEF");


    std::cout << longestCommonPrefix(input) << std::endl;
    cout<<"size of long="<<sizeof(long)<<endl;
    return 0;
}