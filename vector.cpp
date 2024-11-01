#include <iostream>
#include <vector>
using namepsace std;
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  // nhap in vertor = iterator
  int n;cin >>n;
  vector <int> vec;
  for(int i = 0 ; i < n; i++){
    int enter; cin >> enter;
    vec.push_bacK(enter);
  }
  for(vector <int> ::iterator it = vec.begin(); it != vec.end();it++){
    cout << *it << " ";
  }
}
