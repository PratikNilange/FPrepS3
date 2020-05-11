#include<iostream>
using namespace std;
int main()
{
  int in1, in2, in3, in4;
  cin >> in1 >> in2 >> in3 >> in4;
  int doll, cent, dolltemp = 0, centtemp;
  centtemp = in2 + in4;
  while(centtemp>=100){
    centtemp = centtemp%100;
    dolltemp++;
  }
  cent = centtemp;
  doll = in1+in3+dolltemp;
  cout << doll << "\n";
  cout << cent;
}
