#include <iostream>
using namespace std;

int main() {
    // First two Fibonacci numbers
      int a = 1, b = 2;
     int sum = 0;
    
    // Loop while Fibonacci numbers are less than or equal to 4 million
    while (b <= 4000000) {
        // Add to sum if Fibonacci number is even
        if (b % 2 == 0) {
            sum += b;
            
        }
        // Move to next Fibonacci number
         int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    cout << sum <<endl;
    

    return 0;
}
