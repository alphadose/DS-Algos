#include<bits/stdc++.h>
using namespace std;

// A comparison function which is used by sort() in printLargest() 
int myCompare(string X, string Y) 
{ 
    // first append Y at the end of X 
    string XY = X.append(Y); 
  
    // then append X at the end of Y 
    string YX = Y.append(X); 
  
    // Now see which of the two formed numbers is greater 
    return XY.compare(YX) > 0 ? 1: 0; 
} 
  
// The main function that prints the arrangement with the largest value. 
// The function accepts a vector of strings 
void printLargest(vector<string> arr) 
{
    sort(arr.begin(), arr.end(), myCompare);
    for (int i=0; i < arr.size() ; i++ ) 
        cout << arr[i]; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    vector<string> arr; 
  
    //output should be 6054854654 
    arr.push_back("54"); 
    arr.push_back("546"); 
    arr.push_back("548"); 
    arr.push_back("60"); 
    printLargest(arr); 
  
   return 0; 
} 