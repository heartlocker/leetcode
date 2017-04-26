#include <iostream>
#include <string>
using namespace std;
string convert(string s, int numRows) {
string a[numRows];
    if(numRows>s.size())
        numRows=s.size();
    for(int count=0;count<s.size();){
        for (int i = 0; count<s.size()&&i < numRows; i++) {

            a[i]+=s[count++];
        }

        for (int j = numRows-2;count<s.size()&&j >0; j--)
            a[j]+=s[count++];

    }
    string result;
    for(int i=0;i<numRows;i++)
        result+=a[i];
    return  result;
}
int main() {
    string input="PAYPALISHIRING";

    std::cout <<"result="<< convert("ABC",3) << std::endl;

    return 0;
}