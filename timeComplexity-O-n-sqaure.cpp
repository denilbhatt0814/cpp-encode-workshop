#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  // Nested for loops 1st: i=0 to n
  // 2nd : j = 0 to i
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      // Some operation -> O(i)
    }
  }

  // This results in s = 0 + 1 + 2 + 3 +...+ (n-1)
  // i.e O(n(n-1)/2) = O(n^2) - O(n)
  // Since @ n = 10^7 -> n^2 >> n
  // we get total O(n^2)

} 
