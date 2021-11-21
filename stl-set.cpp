#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Sets -> doesn't allow copies of values & and sorts the data on its own

/*
  Types:
    1. set:               no copies    + sorted
    2. multiset:          copies allow + sorted
    3. unordered_set:     no copies    + unsorted
    4. unsorted_multiset: copies allow + unsorted 
*/

int main() {
  // Set
  set<int> s;

  // Adding value in set
  s.insert(8);
  s.insert(6);
  s.insert(9);
  s.insert(3);
  s.insert(7);

  // Print whole set
  cout<<"Set: ";
  for(auto itr:s){
    cout << itr << " ";
  }
  cout<<"\n";

  // MULTISET
  multiset<int> ms;
  ms.insert(3);
  ms.insert(2);
  ms.insert(3);
  ms.insert(1);

  cout<<"Multi-set: ";
  for(auto itr:ms){
    cout << itr << " ";
  }
  cout<<"\n";
  return 0;
} 
