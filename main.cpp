//Single Line Comment 
/*
To Display a Large Comment 
*/
#include <iostream>
#include "main.h" //function declarations in the header file
#include <cmath>

//Main Function
int main(){

    //Initiate function
    //helloWorld();
    //input_output();
    power();
}


//Function Definitions

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

//Power function
double power(){

    double result = 1;
    int base, exponent;

    std::cout << "Enter the base: " << std::endl;
    std::cin >> base;
    std::cout << "Enter the exponent: " << std::endl;
    std::cin >> exponent;
    
    for(int i = 0; i < exponent; i++){
        result *= base;
    }

    std::cout << result;

}


