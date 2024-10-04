/*
Insertion Sort

Approach : -

- Treat first element as sorted. which it always is

- from second element make it's palce empty
  check is by comparing it with prev
  elements and push the greater one forward
  * The element which we pic is in temp memory


## from 1 -> n-1 place elements at corrent index.
## define the current element and the previous index
## while prev >= 0 and element at prev > current we will
    update the position and decrement the index
## since this loops runs from start at each point all cases
   are taken care of

## after loop is completed the prev is at a palce behind the
   curr. so we need to adjust the current element to 1 ahead
   of prev
*/



// Code:


#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {

	vector<int>v { -1, 3, 4, 12, 6, 5, -13, 5, 33};
	int n = v.size();

	for (int i = 1; i <= n - 1; ++i) {
		int curr = v[i];
		int pre = i - 1;

		while (pre >= 0 && v[pre] > curr) {
			v[pre + 1] = v[pre];
			pre = pre - 1;
		}

		v[pre + 1] = curr;
	}


	for (auto x : v) {
		cout << x << " ";
	}
	return 0;
}
