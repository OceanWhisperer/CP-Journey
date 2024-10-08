/*
Problem Statement: 

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.</p>
*/

/*
 - Math Approach

 ## By using the AP Sum formula we can find the sum of all 
    multiples of 3 and 5 seperatly. Then we will subract
    the common elements by subtracting sum of 
    multiples of 15 from the total of 3 and 5. The final 
    answer will be the desired answer
    

 - Formula
  n/2*(a + l), Tnth = a + (n-1)*d
  n can be found out using nth term formula Tnth will be
  the last multiple of 3, 5 , 15 under 1000.

*/

// Code: 


#include <iostream>
using namespace std;


int main() {
    
   
    int total = 0;

    for(int i =0; i < 1000; ++i) {
        if(i%3==0 or i%5==0) {
              total +=i;
        }
    }
    cout << total;

    return 0;
}