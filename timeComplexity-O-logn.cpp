#include <iostream>

using namespace std;

int main() {
  int steps = 0;

  int n;
  cin >> n;
  while (n > 0)  {
    n/=2;  // this operation in a while of n>0 sets -> O(log n)
    // Some task
    steps++ ;
  }

  /*
    here for eg: n = 8
    then due to n/2: 8 -> 4 -> 2 -> 1
    meaning we reach 1 in just 3 steps
    i.e n -> n/(2^1) -> n/(2^2) -> n/(2^3) -> ... -> until we get val = 1 which would be n/(2^x)
    now n/(2^x) = 1; and by applying log on both side
    we get x = log(n) base 2
    thus, O(logn)
  */

  cout << steps << endl;
} 
