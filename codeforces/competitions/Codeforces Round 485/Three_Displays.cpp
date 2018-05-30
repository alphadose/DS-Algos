#include<iostream>
#include <climits>
using namespace std;

int findspace(long int s[], int &pos_i, int &pos_j, int &pos_k, int n) {
    if(s[pos_i] < s[pos_j] && s[pos_j] < s[pos_k])
        return 1;
    int found =0;
    pos_j=pos_i+1;
    for(int i=pos_j;i<n-1;i++)
        if(s[i]>s[pos_i]) {
                found = 1;
                pos_j=i;
                break;
            }
    if(found==0) {
         pos_i+=1;
         findspace(s, pos_i, pos_j, pos_k, n);
    }
    pos_k=pos_j+1;
    for(int i=pos_k;i<n;i++)
        if(s[i]>s[pos_j]) {
                found = 1;
                pos_k=i;
                break;
            }
    if(found==0) {
         pos_i+=1;
         findspace(s, pos_i, pos_j, pos_k, n);
    }
}
int main() {
    int n;
    cin>>n;
    int flag =0;
    long int s[n],c[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cin>>c[i];
    int min_i,min_j,min_k;
    int pos_i=0,pos_j=0,pos_k=0;
    long int count;
    findspace(s, pos_i, pos_j, pos_k, n);
    if(s[pos_i]<s[pos_j] && s[pos_j]<s[pos_k]) {
        count =c[pos_i]+c[pos_j]+c[pos_k];
        flag = 1;
    }
    else {
        cout<<-1;
        return 0;
    }
    long int sum1,sum2,sum3,minsum;
    for(int i=pos_k+1;i<n;i++) {
        if(s[i]>s[pos_k] && s[pos_k]>s[pos_j] && s[pos_j]>s[pos_i]) {
            sum1 = c[pos_k] + c[pos_j];
            sum2 = c[pos_j] + c[pos_i];
            sum3 = c[pos_k] + c[pos_i];
            if(sum1 < sum2 && sum1 < sum3)
                minsum = sum1;
            else if(sum2 < sum1 && sum2 < sum3)
                minsum = sum2;
            else if(sum3 < sum1 && sum3 < sum1)
                minsum = sum3;
            if(count>c[i]+minsum) {
                if(minsum==sum1) {
                    pos_i=pos_j;
                    pos_j=pos_k;
                    pos_k=i;
                }
                else if(minsum==sum2) {
                    pos_k=i;
                }
                else if(minsum==sum3) {
                    pos_j=pos_k;
                    pos_k=i;
                }
                count = c[i] + minsum;
            }
        }
    }

    cout<<count;
}