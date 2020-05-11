#include<iostream>
#include<string>
using namespace std;
int main()
{
  int a, temp, sum = 0;
  cin >> a;
  int b = a;
  while(a!=0){
    temp = a%10;
    //cout << temp << "\n";
    sum = sum + temp;
    a = a/10;
  }
  if(b%sum==0){
    cout << "Harshad Number";
  }
  else
    cout << "Not Harshad Number";
}
