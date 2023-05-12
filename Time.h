#include <iostream>
using namespace std;
#include <iomanip>

void getTime(int &h,int &m)
{
  char b; 
  cout << "Input hour & min: ";
  cin >> h >> b >> m;  
}

int subtract(int h1, int m1, int h2, int m2){
    int h,m;
    h = h2-h1;
    m = m2-m1;
  if (m<0){
    h--;
  }
  if (h<0){
    h+=24;
  }
  return h;
}

int subtract(int m1, int m2){
  int m;
  m = m2-m1;
  if(m < 0){
    m += 60;
  }
  
  return m;
}