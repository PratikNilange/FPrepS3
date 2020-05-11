#include <iostream>
using namespace std;
int main() {
  int in1;
  cin >> in1;
  for(int i = 1; i<=in1; i++){
    if(i%2==0)
    {
        cout << i+1;
    }
    for(int j=1;j<in1;j++)
    {
       cout << i;
    }
    if(i%2!=0)
    {
        cout << i+1;
    }
        cout << "\n";
    }
  return 0;
}
