#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int in1;
  cin >> in1;
  float o1 = 0.5;
  for(int i = 0; i<in1; i++){
    cout << pow(3,i)*o1 << " ";
  }
}
