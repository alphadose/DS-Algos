#include<bits/stdc++.h>

using namespace std;

struct kekw {
  int cook;
  kekw(int m): cook(m) {}
};

int b();

int a() {
  return b();
}

int b() {
  return 1;
}

unsigned int countSetBits(int n) 
    { 
        unsigned int count = 0; 
        while (n) { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
    } 
  
template<typename A=int, typename B=string>
struct xd {
  A meow;
  A* bhow;

  bool operator()(kekw a, kekw b) const {
    return a.cook == b.cook;
  }
  void operator=(A a) {
    cout<<"op call"<<endl;
    meow = a;
  }

  A* operator->() const {
    return bhow;
  }

  A& operator[](B a) {
    cout<<"Index is "<<a<<endl;
    return meow;
  }

  friend ostream& operator<<(ostream &out, xd &f);

  xd(A m, A* b): meow(m), bhow(b) {}
};

ostream& operator<<(ostream &out, xd<> &f) {
  out<<f.meow;
  hash<int>{}(1);
  return out;
}

int lol() {

}

enum pos {
  kek,
  w,
  meow
};

class meow2 {
  private:
  int mu();
  public:
  meow2(){}
  int gu();
};

int meow2::mu() {
  return 69;
}

int meow2::gu() {
  return mu();
}

int main() {
  meow2 meks;
  cout<<meks.gu()<<endl;
    // priority_queue<kekw, vector<kekw>, xd> pq;
    // function<int(double)> it = [](double a) -> int {
    //   return a;
    // };
    // cout<<n->operator->()->cook;

    // auto p = new xd(0);
    // p = f;
    // cout<<(f == p);
    // cout<<f.meow<<endl;
    // f["kooky"] = 69;
    // f = 20;
    // cout<<f.meow<<endl;
    // cout<<f(kekw(1), kekw(2))<<endl;;

    // cout<<f;
    // string s = "abcd";

    // for (int i=0;i<s.length()-1;i++) {
    //     for(int j=1; i+j<=s.length();j++)
    //         cout<<s.substr(i, j)<<"\n";
    // }
    // if (s.substr(0, 0)=="") {
    //     cout<<"kekw"<<"\n";
    // }
    // vector<int> A{1,2,3,4,5};
    // auto it = A.erase(A.begin(), A.begin()+3);
    // cout<<*it<<endl;
    // cout<<*(it+1)<<endl;
    // for(auto a: A) cout<<a<<endl;

    // map<pair<int, int>, int> kekw;

    // kekw[make_pair(1,3)] = 69;
    // cout<<kekw[make_pair(1,3)];

    // string s = "elma";
    // // cout<<'9'-'0';
    // // cout<<s.compare("elna");
    
    // vector<string> A = {"b", "a", "k"};

//    vector<string> A = {"mobile","mouse","moneypot","monitor","mousepad"};

  //  sort(A.begin(), A.end(),
    //[](string a, string b) {
      //  return a.compare(b) < 0;
    //});

    //for(auto a : A) cout<<a<<endl;

	// string s = "A\0e";
	// //s[1] = '\0';
	// cout<<s;

  // int a[] = {1, 1, 1, 2, 2, 2, 2, 3, 3};
  // auto it = lower_bound(a, a+9, 0);
  // auto it2 = upper_bound(a, a+9, 0);
  // cout<<equal_range(a, a+9, 2).second - &a[0]<<endl;
  // int b;
  // kekw* a;
  // vector<int*> A;
  // while(true) {
  //   A.push_back((int*)(malloc(1000000*sizeof(int))));
  // }
  // a->meow = 69;
  // cout<<a->meow;
  // map<int, int> kekw = {
  //   {1, 2},
  //   {3, 4}
  // };
  // cout<<sizeof(kekw)<<endl;
  // int a[] = {1, 2, 3, 4};
  // cout<<sizeof(a)/sizeof(int)<<endl;
  // set<int> kekw = {3, 4};
  // for(auto it = kekw.begin(); it != kekw.end(); ++it) it->first--;
  // // for(auto& it : kekw) it.second--;
  // for(auto it : kekw) cout<<it.first<<endl;

  // list<int> arr = {1,2,3,4};
  // auto it = ++arr.rbegin();
  // // cout<<*it<<endl;
  // arr.push_back(5);
  // cout<<*it<<endl;
  // cout<<*arr.rbegin()<<endl;

  // string s = "ABCD";
  // for(char& c : s) c = tolower(c);
  // cout<<s;
  // unordered_set<int> A = {1,2,3};
  // A.erase(69);
  // // cout<<string::npos;

  // // list<kekw> m = {1,2,3};
  // // list<kekw>::iterator it = m.begin();
  // // cout<<(it->cook);

  // vector<string> meow = {"abc", "abcd", "def"};
  // cout<<*(lower_bound(meow.begin(), meow.end(), "d"));

  // int a[0];
  // // a[0] += 1;
  // cout<<a[0]<<endl;
  // printf("%d", a[0]);

  // vector<int> A = {1,2,3};
  // cout<<lower_bound(A.begin(), A.end(), 3) - A.begin();

  // string a = "abc@cdef.com";
  // cout<<a.substr(a.find("@"))<<endl;

  // map<int, int, greater<int>> kekw = {
  //   {1,1},
  //   {2,2},
  //   {3,3}
  // };

  // for(auto i : kekw) {
  //   cout<<i.first<<" "<<i.second<<endl;
  //   kekw[4]++;
  // }

  // vector<int> a = {1,2,3,4};
  // auto it = lower_bound(a.begin(),a.begin()+3,400);
  // if(it == a.begin()+3) cout<<"yes";
  // else cout<<"no";

  // int arr[] = {1,2,3,0,1,2};
  // int n = sizeof(arr)/sizeof(int);
  // for(int a : arr) {
  //   arr[a%n] += n;
  // }

  // for(int i = 0;i<n;i++) {
  //   if(arr[i] >= 2*n) cout<<i<<endl;
  // }
  cout<<thread::hardware_concurrency();
  int m[] = {1,2,3};
  cout<<*max_element(m,m+3)<<endl;

  string a = "gbc", b = "def";
  cout<<lexicographical_compare(a.begin(),a.end(),b.begin(),b.end());
}
