#include<iostream>
#include<map>
using namespace std;

int main() {
    int n,t;
    string color;
    cin>>n;
    t=n;
    map<string, string> list = {{"red","Reality"},
                                {"purple","Power"},
                                {"green","Time"},
                                {"blue","Space"},
                                {"orange","Soul"},
                                {"yellow","Mind"}};
    while(n--){
        cin>>color;
        list.erase(color);
    }
    cout<<6-t<<endl;
    for(auto elem : list)
    {
    std::cout << elem.second<<endl;
    }
}