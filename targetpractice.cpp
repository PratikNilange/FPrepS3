#include<iostream>
using namespace std;
int main(){
  int in1, fin = 0, temp1 = 0;
  int a[10] = {0,0,0,0,0,0,0,0,0,0};
  cin >> in1;
  for(int k = 0; k<10; k++){
    cin >> a[k];
  }
  for(int k = 0; k<4; k++){
    if(in1>fin){
      fin = fin + a[k];
      temp1++;
    }
    else
      break;
  }
  cout << "The number of turns is "<<temp1;
}
