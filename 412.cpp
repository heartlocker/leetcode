#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
vector<string> fizzBuzz(int n) {
        int i=1;
        stringstream ss;
        string str;
        vector<string> res;
        while(i<=n)
        {
           string a="";
           if(i%3==0)
            a="Fizz";

            if(i%5==0)
            a+="Buzz";

            if(!a.empty())
            res.push_back(a);
            else
            {

              str=to_string(i);
            res.push_back(str);
            }
            i++;
        }
        return res;
    }

  int main()
  {
    vector<string> v;
    v=fizzBuzz(20);

    int size=v.size();
    for(int i=0;i<size;i++)
    {
      cout<<v[i]<<endl;

    }
    return 0;
  }
