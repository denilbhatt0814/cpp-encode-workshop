#include <iostream>
using namespace std;

void fun1(int n){
  n++;
  cout << &n << " : " << n <<"(in fun1)"<<endl;
}

void fun2(int &x){
  x++;
  cout << &x << " : " << x <<"(in fun2)"<<endl;
}

int main() {
  int a = 20;
  int *ptr = &a; // stores address of in ptr
  cout<<ptr; // address
  cout<< " has stored ";
  cout<< *ptr <<endl; // values

  // Passed by value:
  cout << "\n For passed by value:\n";
  int n = 5;
  cout<< &n <<" : "<< n <<"(before)"<<endl;
  fun1(n);
  cout<< &n <<" : "<< n <<"(after)"<<endl;
  /*
    This shows that passing by value creates
    a copy and any operations taking place 
    in function would take place on that copy.
  */

  // Passed by reference
  cout << "\n For passed by reference:\n";
  int x = 5;
  cout<< &x <<" : "<< x <<"(before)"<<endl;
  fun2(x);
  cout<< &x <<" : "<< x <<"(after)"<<endl;
  /*
    This shows that passing by reference pases the memory address of that variable 
    and any operations taking place in function would 
    take place at that memory address(actual variable in main).
  */

  return 0;
  
} 

