#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<string> sentence = {"hello", "world"};
    vector<string> sentence = {"hello", "world"};
    int rows = 2, cols = 8;

    int i = 1;
    int counter = 0;
    int remaining_len = cols;

    while(i <= rows) {
        int index = 0;
        while(index < sentence.size()) {
            if(int(sentence[index].length()) <=  remaining_len) {
                remaining_len -= (sentence[index++].length() + 1);
            } else {
                if(++i > rows) goto a;
                remaining_len = cols;
            }
        }
        counter++;
    }
    a:
    cout<<counter;
}
