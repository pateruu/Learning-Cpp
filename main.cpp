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
    //boolDataType();
    //floatingPointDataType();
    //constants();
    //numericFunctions();
    //strings();
    userInputForStrings();
}

//Function Definitions

//Function prints Hello World.
void helloWorld(){

    std::cout << "Hello World\n";

}

//Function that uses Input/Output.
void input_output(){

    int number{};

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> number;
    std::cout << "The number you entered was: " << number << "." << std::endl;
    
}

//Power function.
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

//Function explaining the int Data Type.
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

//Function explaining the character Data Type.
void charDataType(){

//use single quotes for characters.
    char x = 'A';

    std::cout << x << std::endl;

}

//Function explaining various escape sequences.
void escapeSequence(){

    std::cout << "Hello\tThere" << std::endl;  //a tab.
    std::cout << "Hello There\n"; //next time.
    std::cout << "Hello\vThere"; //a verticle tab.
    std::cout << " \"Hello There\" "; //To print a "
    std::cout << "Hello\\ There"; //a backslash.
    std::cout << "Hello There\0"; //null terminating character. Indicating the end of a C style string.
}

//Function explaining the bool Data Type.
void boolDataType(){

    bool pizza_is_good = 0; //0 is False, and 1 is True
    bool cheese_is_good = true; //True or False

    bool found = false;
    std::cout << found << std::endl;
    std::cout << std::boolalpha << found << std::endl;  //print it out as a false or true.

}

//Function explaining the floating point Data Type.
void floatingPointDataType(){

    //There are three types of floating point numbers.
    float a;  //with large sig figs, it gets inaccurate. (Good to 6 sig figs)
    double b; //more better with a larger amount of sig figs. (Good to 16 sig figs)
    long double c; //(Good to 18 sig figs)

}

void constants(){
    
    #define X 10; //another way to define a constant.
    
    const int x = 5;  //a symbolic constant.

    enum{ y = 100 };

}

//Numeric Functions.
void numericFunctions(){
    #include <cmath>

    std::cout << sqrt(-25) <<std::endl; //will print NAN, not a number.
    
    std::cout << pow(9, 999) << std::endl; //will print inf (infinity)
    std::cout << pow(-9, 999) << std::endl; //will print -inf (negative infinity)
    
    std::cout << remainder(10, 1) << std::endl; //remainder works with floating points.
    std::cout << 10 % 3 << std::endl; //modulus operator, does not work with floating points.
    
    std::cout << fmax(10, 3.25) << std::endl; //highest value.
    std::cout << fmin(10, 3.25) << std::endl; //lowest value.
    
    std::cout << ceil(3.25) << std::endl; //ceil rounds up.
    std::cout << floor(3.25) << std::endl; //floor rounds down.
    std::cout << trunc(3.25) << std::endl; //trunc rounds down as well. Diff between trunc and floor is in the negative values.
    std::cout << round(3.25) << std::endl; //rounds to the closest value.

}

//Shows some things that you can do with strings.
void strings(){
    #include <string>

    std::string greeting = "hello";  //make sure to prefix string with std::
    std::cout << greeting[0] << std::endl; //to grab the first character in the string.

    std::string complete_greeting = greeting + " there."; //concatenate.
    std::cout << complete_greeting << std::endl;

    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;

    std::cout << complete_greeting.length() << std::endl;

    //C style string
    char name[] = "Caleb"; // C string == array of characters == "Caleb\0" Basically has 6 characters and cannot be assigned a value larger than that. 

}

//Shows how to get a sentence for the user input.
void userInputForStrings(){

    std::string greeting;
    std::cin >> greeting;
    std::cout << greeting << std::endl;  //problem with this is if you enter "Hello there", it stores only "Hello" because it stops at " "

    getline(std::cin, greeting); //if you want to get a string input from user.
    std::cout << greeting << std::endl;

}


