#include <iostream>
#include "main.h" //function declarations in the header file
#include <vector>

class User;

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


class Body;

class Body{

  public:
    double position_[3];
    double velocity_[3];
    double mass_;

};



int main(){

  //User user, user1, user2;
  //std::cout << User::get_user_count() << std::endl;

  //For Body Class
  Body earth {{149.6e6, 0.0, 0.0}, {0.0, 107e3, 0.0}, 5.972e24};
  Body mars {{0.0, 249.2e6, 0.0}, {86.8e3, 0.0, 0.0}, 6.39e23};

  //how to use variables inside class
  std::cout << earth.mass_ << std::endl; 
  std::cout << earth.position_[0] << std::endl;

  Body tmp{ earth }; //All entries are copied from earth
  tmp = mars;  //All entries are copied from mars
  tmp.mass_ = 0.0; //Sets only mass of tmp to 0.0

  //Using a namespace
  int x{0};
  my_namespace::sin(x);
  

  return 0;

}

//Made a namespace
namespace my_namespace {
  
  double sin(double x);

  double sin(double x){

    std::cout << "using sin function in my_namespace" << std::endl;
  }

}