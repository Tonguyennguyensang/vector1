#include <iostream>
#include <map>
#include <anordered_map>
using namespace std;
int main() {
map <int, int > m; // key and valuaable 
  m[1] = 2;
  m[2] = 5;         // gán giá trị
  m[3] = 1;
if(m.find(6) != m.end());
for( auto x : m ){
    cout << x.first <<"  " << x.second;
}
  anordered_map <int,int> m1;
  m[1] = 2;
  m[2] = 5;         
  m[3] = 1;
  m[4] = 5;         
  cout << m1.size();
  cout << endl;
  for(auto x1 : m1){
    cout << m1.first <<" " << m1.second;
}
