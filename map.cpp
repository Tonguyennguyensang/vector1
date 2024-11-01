#include <iostream>
#include <map>
#include <anordered_map>
#include <queue>
using namespace std;
int main() {
ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
map <int, int > m; // key and valuaable 
  m[1] = 2;
  m[2] = 5;         // gán giá trị
  m[3] = 1;    
if(m.find(6) != m.end());
for( auto x : m ){
    cout << x.first <<"  " << x.second << endl; // key được xếp từ nhỏ - lớn 
}
cout << endl;
  anordered_map <int,int> m1;
  m1[1] = 2;
  m1[2] = 5;         
  m1[3] = 1;
  m1[4] = 5;   
  if(m1[0]) cout <<"hello";
  cout << m1.size();
  cout << endl;
  for(auto x1 : m1){
    cout << m1.first <<" " << m1.second << endl; // key được xếp từ lớn - nhỏ
}
  cout << endl;
  priority_queue <int> q;
  q.push(10);
  q.push(1);
  cout <<q.top(); // ra số lớn nhất 
  priority_queue <int , vector <int> , greater <int>>q1;
  q1.push(10);
  q1.push(1);
  cout << q1.top(); // in ra so nhỏ nhất
}
