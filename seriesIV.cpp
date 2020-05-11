#include<iostream>
using namespace std;
int main()
{
  int in1, temp;
  cin >> in1;
  for(int i = 1; i<=in1; i++){
    if(i%2!=0){
      temp = (i*i)-1;
      cout << temp << " ";
    }
    else{
      temp = (i*i)-2;
      cout << temp << " ";
    }
  }
}
