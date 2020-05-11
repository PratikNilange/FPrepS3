#include<iostream>
#include<math.h>
using namespace std;
float marking(int n){
  float a = 1, b = -0.5;
  if(n%2==1){
    return a;
  }
  else if(n%2==0){
    return b;
  }
}
int main(){
  float tot = 0;
  int in1;
  for(int i = 0; i<3; i++){
    cin >> in1;
    if(in1>0){
     tot = tot + marking(in1);
    }
    else{
      tot = tot-1;
      break;
    }
  }
  cout << tot;
}
