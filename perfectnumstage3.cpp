#include<iostream>
using namespace std;
void perfnum(int n){
  int sum = 0;
  for(int i = 1; i<n; i++){
    if(n%i==0){
      sum = sum + i;
    }
    else{
      sum = sum+0;
    }
  }
  if(sum==n){
    cout << sum << " ";
  }
}
int main(){
  int in1, in2;
  cin >> in1 >> in2;
  for(int i = in1; i< in2; i++){
      perfnum(i);
  }
}
