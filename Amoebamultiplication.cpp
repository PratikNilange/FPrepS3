#include<iostream>
using namespace std;
int main(){
  int month;
  cin >> month;
  int curr = 1, prev = 0, next = 0;
  for(int i = 0; i<month-2; i++){
    next = curr + prev;
    prev = curr;
    curr = next;
  }
  cout << next;
}
