#include <iostream>

using namespace std;

int main() {
  // Time complexity: time to perfom an operation
  // Usually 10^7 - 10^8 operation can be perfomed in 1 sec (On online IDE)  

  int x;        // -> O(1)
  int sum = 0;  // -> O(1)
  sum = x + x;  // -> O(1)

  int n;        // -> O(1)
  cin >> n;     // -> O(1)
  // till this point -> O(5)

  for(int i = 0; i < n; i++){
    int a;             // -> O(1) x O(n)
    int b;             // -> O(1) x O(n) 
    int ans = a + b;   // -> O(1) x O(n)
  } // this complete for loop from i=0 to n -> O(3n)

  /* 
    But in time complexity we don't consider constants
    Also we take n in terms of  10^x
  */

  /* 
    thus after neglecting O(5) and considering 3n as n,
    we get the complete time complexity O(n)
  */
} 
