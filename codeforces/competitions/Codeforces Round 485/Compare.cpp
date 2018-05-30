#include<iostream>
#include<math.h>
using namespace std;

int main() {
    long  double x,y,res;
    cin>>x>>y;
    res = y*log(x) - x*log(y);
    if(res > 0)
        cout<<">";
    else if(res < 0)
        cout<<"<";
    else
        cout<<"=";
}