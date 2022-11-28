#include <iostream>
using namespace std;

int main() {
  int myAge = 79;  // An int variable
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  cout<<myAge<<endl;

  // Output the memory address of myAge (0x7ffe5367e044)
  cout<<&myAge<<endl;

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  cout<<*ptr<<endl;

  return 0;
}