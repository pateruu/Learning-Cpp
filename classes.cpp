#include <iostream>
#include "main.h" //function declarations in the header file
#include <vector>


class User{

  std::string status = "Gold";
  static int user_count;

  public:

    static int get_user_count(){
      return user_count;
    }

    std::string first_name;
    std::string last_name;
    
    std::string get_status(){
      return status;  
    }
    
    void set_status(std::string status){
      if(status == "Gold" || status == "Silver" || status == "Bronze"){
        this->status = status;
      } else{
        this->status = status;
      }
    }
    
    User(){
      user_count++;
    }
    
    User(std::string first_name, std::string last_name){
      
      this->first_name = first_name;
      this->last_name = last_name;
      this->status = status;
      user_count++;
    }
    
    ~User(){
      std::cout << "Deconstructor" << std::endl;
      user_count--;
    }


};

int User::user_count = 0;

int main(){

  User user, user1, user2;
  std::cout << User::get_user_count() << std::endl;


}