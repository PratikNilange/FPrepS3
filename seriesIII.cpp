#include<iostream>
using namespace std;
int main()
{
  int in1, temp1 = 6, temp2 = 0;
  cin >> in1;
  for(int i = 0; i<in1; i++){
    temp2 = (i*5) + temp1;
    cout << temp2 << " ";
    temp1 = temp2;
    
  }
}
