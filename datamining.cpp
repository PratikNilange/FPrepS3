#include<iostream>
using namespace std;
int main()
{
  int in1;
  cin >> in1;
  int u = in1%10;
  int t = (in1/10)%10;
  int h = in1/100;
  //cout << u <<"\n"<< t<< "\n" << h;
  int sume = 0, sumo = 0;
  if(u%2==0)
    sume = sume + u;
  else
    sumo = sumo + u;
  if(t%2==0)
    sume = sume + t;
  else
    sumo = sumo + t;
  if(h%2==0)
    sume = sume + h;
  else
    sumo = sumo + h;
  if(sume==sumo)
    cout << "Yes";
  else
    cout << "No";
}
