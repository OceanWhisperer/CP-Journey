#include <iostream>
#include <string>
using namespace std;

int main() {

     string t,p;
     cin >> t >> p;     //  abaabcabadcaba
     int n = t.size();
     int m = p.size();
     int count = 0;
     for(int i=0; i < n-m+1; ++i) {
          string str = t.substr(i,m);
          if(str == p)
            count++;
          else{
            continue;
          }
     }
     cout << count << endl;
}