#include <iostream>
using namespace std;
int reverse(int x) {
int result=0,minus=0,temp=0;
    if (x<0)
    {
        minus=1;
        x=abs(x);
    }
    while(x>0)
    {

        temp=result*10+(x%10);
        if((temp-x%10)/10==result)
            result=temp;
        else
            return 0;
        x=x/10;
    }
    if(minus)
        result=result*(-1);

    return result;
}
int main() {
    std::cout <<reverse(1534236469)<< std::endl;
    return 0;
}