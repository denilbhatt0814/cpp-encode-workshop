#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
  Maps (Key,value) pairs: 
  - collection of similar pairs
  - no copies of Keys
  - sorted acc. to Key

  Types:
    1. map
    2. multimap
    3. unordered_map
    4. unordered_multimap
*/

int main() {
  // Declaring a map
  map<int,string> temp;

  // Adding to map
  temp[361009] = "Gandhinagar";
  temp[391440] = "Vadodra";
  temp[380019] = "Ahmedabad";
  temp[395003] = "Surat";
  
  // accessing single element of map
  cout <<"We accessed " << temp[380019] <<endl;

  // accessing all elements of map
  cout << "Pincodes (sorted by key<int>): \n";
  for(auto itr : temp){
    cout<< itr.first <<" : "<< itr.second <<"\n";
  }
  cout<<"\n";

  // multimap
  multimap <string, int> phonebook;
  
  // adding elements in multimap uses insert func only
  phonebook.insert( pair<string, int>{"Bob", 789736});
  phonebook.insert( pair<string, int>{"Alvin", 123456});
  phonebook.insert( pair<string, int>{"Casie", 567483});
  phonebook.insert( pair<string, int>{"Alvin", 345543}); // so we can save 2 Alvins in phonebook (multimap)

  cout << "phonebook (sorted by key<string>): \n";
  for(auto itr : phonebook){
    cout<< itr.first <<" : "<< itr.second <<"\n";
  }
  cout<<"\n";

  
  return 0;
} 

/*
  // similar could be done using vecotrs + pairs
  vector <pair <int, string>> vec;

  vec.push_back({361009,"Gandhinagar"});
  vec.push_back({380019,"Ahmedabad"});

  for(auto itr : vec){
    cout<< itr.first <<" : "<< itr.second <<"\n";
  }
*/
