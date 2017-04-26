#include <iostream>
#include <string>
using namespace std;

int myAtoi(string str) {
    int result=0,current=0,minus=0;
    if(str[current]=='+'||str[current]==' ')
    current++;
    else if(str[current]=='-')
    {
        current++;
        minus=1;
    }

        for(; current<str.size() ; current++) {
            if((str[current]-'0')>=0&&(str[current]-'0'<=9))
            result=result*10+(str[current]-'0');
            else
                return 0;
        }
    if(minus)
        result*=(-1);
    return result;
    }
int main() {
    string str="+456";
    std::cout << myAtoi(str) << std::endl;
    return 0;
}