#include<bits/stdc++.h>
using namespace std;

void helper(vector<string> &arr, int n, int targetLen) {
    if(n==0) {
        arr.push_back("");
        return;
    }
    if(n==1) {
        arr.push_back("0");
        arr.push_back("1");
        arr.push_back("8");
        return;
    }

    helper(arr, n - 2, targetLen);

    int size = arr.size();
    int i = 0;
    while(i < size){
        string cur = arr[0];
        if(n != targetLen){
            arr.push_back("0" + cur + "0");
        }
        arr.push_back("1" + cur + "1");
        arr.push_back("6" + cur + "9");
        arr.push_back("8" + cur + "8");
        arr.push_back("9" + cur + "6");
        arr.erase(arr.begin());
        size--;
    }
}

int main() {
    vector<string> kek;
    helper(kek, 2, 2);
    for(auto s: kek) cout<<s<<endl;
}