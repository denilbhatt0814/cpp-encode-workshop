#include <iostream>

using namespace std;

void fun(int n) {
  // For of i = 0 to n takes O(n)
  for(int i = 0; i<n; i++){
    // Some operations
    cout<<"Hello"<<"\n";
  }
}

int main() {
  int n;
  cin >> n;

  // While halving on each iteration takes O(log n)
  while(n > 0){
    n /= 2;
    fun(n); // this was taking O(n)
  }

  // thus finally logn x n -> O(n logn)
  return 0;
} 
