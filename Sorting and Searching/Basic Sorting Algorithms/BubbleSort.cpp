// Bubble Sort o(N^2)

/*
Approach

- for each element compare with neighbouring element
and adjsut position

- Do this for each as long as result is obtained
*/


#include <bits/stdc++.h>
using namespace std;

int main() {


	vector<int>v { 5,4,3,2,1};

	int n= v.size();
	
	for(int times = 1; times <= n-1; times++) {
		for(int j = 0; j <= n - times - 1; j++) {
			if(v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
			}
		}
	}

    for(auto x : v) {
    	cout << x<< " ";
    }


	return 0;
}