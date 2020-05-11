#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int in1;
  cin >> in1;
  int start = 11;
  cout << pow(11,2) << " ";
  for(int i = 2; i<=in1; i++){
    start = start + 4;
    cout << pow(start, 2) << " ";
  }
}
