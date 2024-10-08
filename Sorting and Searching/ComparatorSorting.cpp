#include <iostream>
#include <vector>
using namespace std;

bool comp(pair <int, int>a, pair <int,int> b) {
    return a.second > b.second;
}


int main()  {
      

     vector<pair<int,int>>v;
     int n;
     cin >> n;

     for(int i =0; i < n; ++i) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
     }

     sort(v.begin() + 1, v.end(), comp);

     for(auto x : v) {
        cout << x.first << " " << x.second << endl;
     }


    return 0;
}