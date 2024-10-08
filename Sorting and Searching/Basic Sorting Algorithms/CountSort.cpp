// Count Sort
// Almost Linear in terms of range O(R + N)

/*
Approach

- we create a frequency array
- iterate over the freq array and open it into the count

*/


// Code: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
   vector<int>v { 3, 4, 12, 6, 5 , 5, 33};
   int n = v.size();

   int largest = *max_element(v.begin(), v.end()); // get largest element
   vector<int>freq(largest + 1, 0); // cerate freq array
   
   for(auto x : v) {
    freq[x]++;
   } // get the frequencies

   
   // put elements back in orignal array

   int j =0;
   for(int i=0; i <= largest; ++i) {
      while(freq[i] > 0) {
        v[j] = i; // unpacking index into v as many times as value 
        freq[i]--; //   inside the freq vector
        j++;       
      }
   }
   
   for(auto x : v) {
    cout << x << " ";
   }
    return 0;
}