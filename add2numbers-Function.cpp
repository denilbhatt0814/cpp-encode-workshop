#include <iostream>

using namespace std;

int add2numbers(int x, int y){
  int ans = x+y;
  return ans;
}

int main() {
  int a,b,c;
  cin>>a>>b>>c;

  int x = add2numbers(a, b);
  int sum = add2numbers(x, c);

  cout << "sum is " << sum;
} 
