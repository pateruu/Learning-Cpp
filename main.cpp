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
    //power();
    //intDataType();
    //charDataType();
    //escapeSequence();
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
void power(){

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

void intDataType(){

/*
Unsigned - When you are working with something that is always positive.
Signed - When you will be working with both positive and negative numbers.
*/

//4 Primary Integral Data Types + 4 unsigned versions.
short a;
int b;
long c;
long long d;
unsigned short e;
unsigned int f;
unsigned long g;
unsigned long long h;

std::cout << sizeof(short) << std::endl;
std::cout << sizeof(int) << std::endl;
std::cout << sizeof(long) << std::endl;
std::cout << sizeof(long long) << std::endl;

}

void charDataType(){

//use single quotes for characters.
    char x = 'A';

    std::cout << x << std::endl;

}


void escapeSequence(){

    std::cout << "Hello\tThere" << std::endl;  //a tab.
    std::cout << "Hello There\n"; //next time.
    std::cout << "Hello\vThere"; //a verticle tab.
    std::cout << " \"Hello There\" "; //To print a "
    std::cout << "Hello\\ There"; //a backslash.
    std::cout << "Hello There\0"; //null terminating character. Indicating the end of a C style string.
}


