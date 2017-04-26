#include <iostream>
#include<string>
#include <unordered_map>
#include <vector>
using namespace std;
vector <int> findSubstring(string s,vector<string>& word){
    vector<int> index;
    unordered_map<string, int> count;
    for(string x:word)count[x]++;
    int size=s.length();
    int length=word[0].length();
    int num=word.size();

    for (int i = 0; i <size-length*num+1; ++i) {
        unordered_map<string, int> seen;
        int j=0;
        for (; j < num; ++j) {
            string theword=s.substr(i+j*length,length);
            if(count.find(theword)!=count.end()){
                seen[theword]++;
                if (seen[theword]>count[theword])
                    break;
            }
            else
                break;
        }
        if(j==num) index.push_back(i);
    }
    return index;

}
int main() {
    string input="barfoothefoobarman";
    vector<string> word={"foo","bar"};
    vector<int> res=findSubstring(input,word);
    for(int x:res)
        cout<<" "<<x;
    return 0;
}