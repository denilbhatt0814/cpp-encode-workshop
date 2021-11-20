#include <iostream>

using namespace std;

int main() {
  // Pre-increment -> increment 1st then assign
  int x = 10;
  int a = ++x;
  cout<<a<<" "<<x<<endl;

  // Post-increment -> assign then increment
  int y = 10;
  int b = y++;
  cout<<b<<" "<<y<<endl;
  return 0;
} 
