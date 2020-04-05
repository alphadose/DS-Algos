 #include<bits/stdc++.h>

 // Find count of elements less that a certain number (order_of_key) 
// and find the ith largest element (find_by_order)
#include <ext/pb_ds/assoc_container.hpp> // Common file  
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional> // for less  
using namespace __gnu_pbds;  
using namespace std;  
  
// Declaring ordered_set 
typedef tree<int, null_type, less<int>, rb_tree_tag,  
            tree_order_statistics_node_update>  
    ordered_set;  
  
  
// Driver code  
int main()  
{  
    ordered_set mySet; 
      
    // Inserting elements to ordered_set 
    mySet.insert(5);  
    mySet.insert(2);  
    mySet.insert(6);  
    mySet.insert(4);  
    
    cout<<*(mySet.find_by_order(0))<<endl;
    // count of elements less than 6  
    cout << "Count of elements less than 6::"
        << mySet.order_of_key(2) << endl;  
  
    // number 7 not in the set but it will show the  
    // index number if it was there in sorted array.  
    cout << "Count of elements less than 7 ::"
        << mySet.order_of_key(7) << endl;  
  
    return 0;  
}  
