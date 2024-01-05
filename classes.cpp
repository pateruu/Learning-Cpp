#include <iostream>
#include "main.h" //function declarations in the header file
#include <vector>


class User{

  std::string status = "Gold";


  public:
  std::string first_name;
  std::string last_name;
 std::string get_status()
  {
    return status;  
  }


};

int main(){

  User user;
  user.first_name = "Kevin";

  std::vector<User> users;
  users.push_back(user);

  return 0;
}