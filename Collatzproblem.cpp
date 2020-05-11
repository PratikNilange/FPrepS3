#include<iostream>
using namespace std;
int main()
{
  int in1, z = 0;
  cin >> in1;
  cout << in1 << "\n";
  int temp = in1;
  while(temp!=1){
    if(temp%2==0){
      temp = temp/2;
      cout << temp << "\n";
      z++;
    }
    else{
      temp = (3*temp)+1;
      cout << temp << "\n";
      z++;
    }
  }
  cout << z;
}
