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


  //New and Delete Operator
  int *p_int{};
  p_int = new int {42};

  std::cout << p_int << std::endl;

  delete p_int; //This operator sends the address to the OS and tells it that the data at the address is no longer needed.
  p_int = nullptr; //This will help forget the address by assigning 0 to the local variable (by setting it to nullptr)


  //Allocating and Deallocating Arrays
  int *array{ new int[100]{}};

  std::cout << array << std::endl;
  std::cout << array[19] << std::endl;
  array[19] = 2;

  delete[] array;
  array = nullptr;
  //If you ask for more space than there exists then the program will terminate because of a std::bad_alloc exception.
  //NOTE: Dynamically allocated memory only deletes if we use delete or delete[] or the program terminates.
  //With dynamic allocation of memory it helps with returning arrays from functions. Usually you cannot return an array but with pointers, new, and delete we can return an array.

  //How to Fix Wild Pointers
  //Wild pointers are uninitialized pointers. It is because we have no idea what it's value is.
  /*
  Always initialize all pointers even if it is to 'nullptr'
  int *p_value{};
  int *p_value{nullptr};

  When deallocating set pointer to nullptr always.
  delete p_value;
  p_value = nullptr;
  */

  //How to fix Dangling Pointers
  //A dangling pointer is one that stores an address that is no longer allocated.
  //Make sure to set the pointer to nullptr.

  //A problem question
  problem_using_dynamic_memory_allocation();

  //You can use const to decline changes to pointers
  int x{42};

  //What is at the address p_x is constant
  int const *p_x{ };

  //The pointer p_x is constant
  int *const p_x{ };

  //The pointer p_x and what is at the address are both constants.
  int const *const p_x{ };

  return 0;
}

void problem_using_dynamic_memory_allocation();
void print_array();

void problem_using_dynamic_memory_allocation(){

  std::size_t data_capacity{ 10 };
  double *data{new double[data_capacity]};
  std::size_t data_size{0};

  while(true){
    double x{};
    std::cout << "Enter a number:";
    std::cin >> x;

    if(x <= 0.0){
      break;
    }

    if(data_size == data_capacity){
      std::size_t old_capacity{data_capacity};
      double *old_data{data};
      data_capacity *= 2;
      data = new double[data_capacity];

      for(std::size_t k{0}; k < old_capacity; ++k){
        data[k] = old_data[k];
      }

      delete[] old_data;
      old_data = nullptr;
    }

    data[data_size] = x;
    ++data_size;
  }

  print_array(data, data_size);
  delete[] data;
  data = nullptr;

}

void print_array(double *array, std::size_t const capacity){

  if(capacity == 0){
    return;
  }

  std::cout << array[0];

  for(std::size_t k{1}; k < capacity; k++){

    std::cout << ", " << array[k];

  }
  std::cout << std::endl;
}