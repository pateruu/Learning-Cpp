#include <iostream>

int main(){

  //Address a pointer with p_<name> as a naming convention.
  //& is used as "the address of".
  int n{ 42 };
  int *p_datum = {&n}; //p_datum is a pointer to an integer, that stores the address of variable n.

  std::cout << p_datum << std::endl; //will print address of n.
  std::cout << *p_datum << std::endl; //will print data in n. (42)
  *p_datum = 100; //assigns the value 100 to p_datum, which then also changes n.

  std::cout << *p_datum << "==" << n << std::endl; //Will print 100 == 100
  n = 99;
  std::cout << *p_datum << "==" << n << std::endl; //Since we changed n, it will also change pointer, so will print (99 == 99)

  //Pointers are mainly used for the following two reasons...
  // 1. If you want to change an array size, because arrays are usually fixed in size. So you cannot change when compiled.
  // 2. If we require memory that continues to exist outside the scope of a function, like variable data, etc.

  //For loops use std::size_t as the type. Because it will always garuntee to be an unsigned integer that can store the max index for a particular processor.
  //If you want a local variable to index into an array, then use type std::size_t

  return 0;
}