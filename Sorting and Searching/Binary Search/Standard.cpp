// Binary Search O(LogN) works only on ascending arrays
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()  {


    vector<int>v {1, -1, 8, 65, 23, -12, 5, 21};
    int n = v.size();
    int k;
    cin >> k;

   sort(v.begin(), v.end());

    int s = 0; int e = n - 1;

    bool ans = 0;

    while (s <= e) {
        int mid = (s + e) / 2;
        if (v[mid] == k) {
            ans = 1;
            break;
        }
        else if (k > v[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }


    cout << ans << endl; // 1 if element is present 0 if not.

    return 0;
}