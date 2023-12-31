#include <iostream>

//Function Declaration
void helloWorld();
void input_output();

//Main Function
int main(){

    //Initiate function
    //helloWorld();
    input_output();

}

//Function prints Hello World
void helloWorld(){

    std::cout << "Hello World\n";

}

//Function that uses Input/Output
void input_output(){

    int number{};

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> number;
    std::cout << "The number you entered was: " << number << "." << std::endl;
    
}


