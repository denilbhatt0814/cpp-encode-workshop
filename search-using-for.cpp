#include <iostream>

using namespace std;

int main() {
  int arr[] = {0,1,2,3,4,5,6,7,8,9,10};

  for(int i = 0; i < 11; i++){
    if(arr[i]==8){cout<<"YES"<<endl;return 0;}
  }
  cout<<"NO"<<endl;
  return 0;
} 
