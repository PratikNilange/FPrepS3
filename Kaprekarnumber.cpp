#include<iostream>
using namespace std;
int main()
{
  int n, temp1, temp2, temp3, temp4, temp5, sum;
  cin >> n;
  int n2 = (n*n);
  if(n2/100==0){
    temp1 = n2%10;
    temp2 = n2/10;
    sum = temp1+temp2;
  }
  else if(n2/10000==0){
    //2025
    temp1 = n2%10;
    //cout << temp1 << "\t"; //2025%10 = 5;
    temp2 = n2%100 - temp1; //2025%100 = 20;
    //cout << temp2 << "\t";
    temp3 = n2/100; //2025/100 = 20;
    //cout << temp3 << "\t";
    sum = temp1+temp2+temp3;
    //cout << sum;
  }
  else{
    temp1 = n2%10;
    temp2 = n2/10;
    temp3 = n2/100;
    temp4 = n2/1000;
    temp5 = n2/10000;
    sum = ((temp5*10)+temp4+(temp3*100)+(temp2*10)+temp1);
  }
  if(sum==n){
    cout << "Kaprekar Number";
  }
  else
    cout << "Not a Kaprekar Number";
}
