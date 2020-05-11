#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
  float a;
  float exevery;
  cin >> a;
  exevery = 1/pow(a, 0.5);
  float fin = floor((1+exevery)*a);
  cout << fin+1;
}
