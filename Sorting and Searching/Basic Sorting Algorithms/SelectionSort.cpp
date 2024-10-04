/*
Selection Sort

Approach : -

- Find the minimum element from the unsorted part of the
  array and put it at the begining

- iterate over the array and find the smallest elem
   and bring it to the first place

- Repeat the process roughly again N^2


## from 0 go to n-2 and get the current element

*/


// Code:


#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int>v { -1, 3, 4, 12, 6, 5, -13, 5, 33};
	int n = v.size();

	for(int i=0; i <= n-2; ++i) {

		int cur = v[i];
		int min_pos = i;

		for(int j = i; j < n; ++j) {
			if(v[j] < v[min_pos]) {
				min_pos = j;
			}
		}

		swap(v[min_pos], v[i]);

	}



	for (auto x : v) {
		cout << x << " ";
	}
	return 0;
}
