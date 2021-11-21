#include <iostream>

using namespace std;

int main() {
  int a;
  cin >> a;

  for(int i = 0; i < a; i++){
    // As we studied: for loop from i=0 to a take O(a)
    int n;
    cin >> n;

    // and while loop halving each time gives O(log n)
    while(n>0){
      n/=2;
    }
  }

  /* 
    that would be 
    i=0 -> O(log n)
    i=1 -> O(log n)
    i=2 -> O(log n)
          .
          .
          .
    i=a -> O(log n)

    s = logn + logn + ... a times
    s = a x logn

    if a == n (a and n are comparable);
      s = O(n log(n))
  */

  return 0;
} 
