// Nth Root of a number using Binary Search

/* 
TC = P*(Log(N*10^d))
here p is the nth root
and d is precision number
 N is the number
*/

#include <iostream>
using namespace std;

double eps = 1e-6; // level of prescision

double multiply(double x, int n) {
    double ans = 1;
     for(int i = 0; i < n; ++i) {
         ans*=x;
     }
     return ans;
}

int main() {
    
    double x; int n;
    cin >> x; cin >> n;

    double lo = 1, hi = x, mid;

    while(hi - lo >= eps) {

        mid = (lo + hi)/2;

        if(multiply(mid, n) < x) {
            lo = mid;
        }
        else {
            hi = mid;
        }
     }
     

     cout << lo << endl; // or hi 


    return 0;
    
    
}


/*
 Essentially binary seach  can be used on Monotonic 
 functions as well as Predicate Functions {FFFFTTTT}.
 Basically the main idea is that searching for something 
 inside a specific range as fast as possible calls for 
 custom binary search operation. 
*/