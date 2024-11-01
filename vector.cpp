#include <iostream>
#include <vector>
using namepsace std;
int main(){
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
