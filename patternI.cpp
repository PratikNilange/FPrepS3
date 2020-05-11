#include<iostream>
using namespace std;
int main(){
  int in1;
  cin >> in1;
  int levels = 1;
  for(int i = 1; i<=8; i++){
    if(levels<5){
      int temp = i;
    while(temp){
      cout << in1;
      temp--;
    }
    cout << "\n";
    in1++;
    }
    else{
      in1--;   
      int temp = 9-i;
      while(temp){
      cout << in1;
      temp--;
    }
    cout << "\n";
    }
    levels++;
  }
}
