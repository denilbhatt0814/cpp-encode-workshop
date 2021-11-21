#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// LOWER BOUND and UPPER BOUND used only when vector is already SORTED

int main() {
  vector<int> vec = {2, 4, 6, 6, 6, 8, 9};

  cout<<"Vector is: ";
  for(auto itr:vec){
    cout << itr <<" ";
  }
  cout<<"\n";


  int x = 6;
  /* 
    Lower bound of x: 1st ouccurence a value >= x (greater than or equal to)
    this func returns reference/address of the value  
  */
  auto low = lower_bound(vec.begin(), vec.end(), x); 
  cout << "Lower bound of "<< x << ": " << *low <<"\n"; // *low derefrences address

  /* 
    Upper bound of x: 1st ouccurence a value > x (only greater than)
    this func returns reference/address of the value  
  */
  auto upper = upper_bound(vec.begin(), vec.end(), x); 
  cout << "Upper bound of "<< x << ": " << *upper <<"\n"; // *upper derefrences address

  // TO COUNT THE OCCURENCE OF X
  cout<< upper-low << " : " << x << "s are present in vector"<<"\n";

  // to find index of 1st ouccurence of X in vector
  cout<< "Index of "<<x<< " is "<<low-vec.begin()<<"\n";
  
  return 0;
} 
