#include <iostream>
#include <string>
#include <algorithm>
#include <array>
 using namespace std;
string toHex(int num){
// string res="";
// int temp=0;
// char a;
// while (num>0) {
//     temp=num%16;
//     if (temp>9) {
//        a='a'+(temp-10);
//
//     }
//     else
//     {
//        a='0'+temp;
//     }
//    res+=a;
//    num=num/16;
// }
//   reverse(res.begin(),res.end());
if (num == 0) {
           return "0";
       }
       union {
           int n1;
           unsigned int n2;
       } m;
       m.n1 = num;
       unsigned cnum = m.n2;
       std::array<char, 16> arr({'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'});
       std::string ret("");
       while (cnum > 0) {
           ret.insert(0, 1, arr[cnum & 0xf]);
           cnum /= 16;
       }


return ret;

}
   int main(int argc, char const *argv[]) {
    string temp="";
    int i=-1&0xf;
    cout<<"a:"<<i<<endl;
    temp=toHex(-1);
    cout<<"result:"<<temp<<endl;
    return 0;
  }
