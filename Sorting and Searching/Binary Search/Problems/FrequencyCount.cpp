// Binary Search O(LogN) works only on ascending arrays
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

/*

MAP BASED APPROACH
int main()  {


   vector<int>v {1,1,2,2,2,3,4,5,5,12,8};
   int k;
   cin >> k;

   unordered_map<int,int>freq;

   for(auto x : v) {
    freq[x]++;
   }

   int val = freq[k];
   cout << val;

    return 0;
}
*/


// BS Approach manual


/* for multiple elements we find the first and last occurance
   and say that number =last - first + 1 
   We write the upper bound and lowebounds and tese are first
   and last
   
   We do binary search 3 times. 1) for the element. and more 
   two times in the left for lower and right part for upper
   these are done continuously.
   */


// only one change to be done is e = m - 1 for true case


int main() {
    
    // using STL 
    vector<int>v {1,1,2,2,2,3,4,5,5,12,8};
   int k;
   cin >> k;

   sort(v.begin(), v.end());

   auto it = upper_bound(v.begin(), v.end(), 2);
    auto iit = lower_bound(v.begin(), v.end(), 2);
    it--;

    int pos = it - iit;

    cout  << pos << endl;
    
    return 0;
}