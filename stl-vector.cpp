#include <iostream>
#include <bits/stdc++.h>  // Important for STL

using namespace std;

/*
  a vector provides dynamic allocation for storing values
  memory allocation follows this:
  |No of element| Size |
  |      0      |   0  |
  |      1      |   1  |
  |      2      |   2  |
  |      3      |   4  |
  |      4      |   4  |
  |      5      |   8  |
  |      6      |   8  |
  |      7      |   8  |
          .          .  
          .          .  
*/

int main() {
  // Vector
  vector<int> abc;

  abc.push_back(3);
  abc.push_back(5);
  abc.push_back(2);
  abc.push_back(6);

  // to access a specific value vec[index]
  cout<<"2nd element: "<<abc[1]<<endl; 

  // accesing Last element of vector
  cout<<"Last element: "<< abc.back() <<endl;

  /* // VECTOR AS ARRAY
    vector<int> abc(3) -> makes allocation of memory constant
    // this is same as -> int abc[3] -> ARRAY with capacity of 3
  */

  // Accessing all elements of vector
  for(int i = 0; i < abc.size(); i++){
    cout << abc[i] <<" ";
  }
  cout<<"\n";

  // BEST METHOD TO ACCESS elements
  for(auto itr : abc){
    cout<< itr << " ";
  }
  cout<<"\n";

  // SORTING a vector 
  sort(abc.begin(), abc.end()); //ascending order
  cout<<"Sorted vector(ascending): ";
  for(auto itr : abc){
    cout<< itr << " ";
  }
  cout<<"\n";

  // sorting in decending order
  sort(abc.begin(), abc.end(), greater<int>());
  cout<<"Sorted vector(decending): ";
  for(auto itr : abc){
    cout<< itr << " ";
  }
  cout<<"\n";
  
  retunr 0;
} 

