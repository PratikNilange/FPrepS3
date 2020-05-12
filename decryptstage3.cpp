#include<iostream>
using namespace std;
int main(){
  int in1, in2;
  cin >> in1 >> in2;
  int temp1 = in1 + in2;
  int sum = 0;
  for(int i = 1; i<temp1; i++){
    if(temp1%i==0){
      sum = sum + i;
    }
    else{
      sum+=0;
    }
  }
  if(sum==temp1){
    cout << "They can read the message";
  }
  else
    cout << "They can't read the message";
}
