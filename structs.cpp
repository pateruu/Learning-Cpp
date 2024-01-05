//Structs and Classes are generally the same thing in C++ but usually structs they have only small number of members, and classes are used when many members.
//Members are by default public.
//Members for classes are by default private.
#include <iostream>
#include "main.h" //function declarations in the header file

struct User{

  std::string first_name;
  std::string last_name;

  std::string get_status(){
    return status;
  }

  private:
    std::string status;

};

int main(){

  User me;
  me.first_name = "kevin";
  me.last_name = "Patel";


}