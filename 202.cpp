#include <iostream>
#include <unordered_map>
using namespace std;

int Helper(int n)
{

 int ret =0;
 cout<<" input"<<n<<endl;
 while(n)
 {

     int digit =n%10;
     cout<<" digit="<<digit<<endl;

     n/=10;
     cout<<" n="<<n<<endl;

     ret+= digit*digit;
     cout<<" ret="<<ret<<endl;

 }

 cout<<endl<<endl;

 return ret;
}
    bool isHappy(int n) {
       unordered_map<int,bool> m;
       int sum = Helper(n);
       while(sum!=1)
       {
         if(m[sum]==true)
         return false;
         m[sum]=true;
         sum=Helper(sum);
    }
    return true;
    }
  int main()
  {
int n=19;
 bool r=isHappy(n);
 if (r) {
   cout<<"yes";

 }
 else
 cout<<"false";
  }
