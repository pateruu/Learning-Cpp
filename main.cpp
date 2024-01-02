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
    //userInputForStrings();
    //stringModifierMethods();
    //ifStatments_Operators();
    //switchStatements();

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

//Some string modifiers that you can use.
void stringModifierMethods(){

    std::string greeting = "Hello";
    std::string greeting2 = "What is the mealplan?";
    
    //Part1
    std::cout << greeting.length() << std::endl; //gives back length of the string
    std::cout << greeting.size() << std::endl; //same to length

    greeting += " there"; //to append
    greeting.append(" there!"); //to append

    greeting.insert(3, " "); //at position 3 insert the following.
    
    greeting.erase(3, 1); //to go into a string at the first value, then erase the amount mentioned as the second value. If no second value,then it removes everything after the specified position. (3)
    
    greeting.erase(greeting.length() - 1); //index starts at 0, so it will get rid of the last character.
    greeting.pop_back(); //to get rid of the last character.
    
    greeting.replace(0, 4, "Heaven"); //delete the first four characters and replace it with heaven. Start at 0, delete 4 chars. Add heaven.

    //Part2
    greeting2.replace(greeting2.find("the"), 3, "our"); //finds "the", then adds a 3 character string "our"
    std::cout << greeting2.substr(5, 2) << std::endl; //if you want to pull out a certain part of a string.
    std::cout << greeting2.find_first_of("aeiou") << std::endl; //it finds the first of something in the string. Outputs 2, because first vowel is at position 2.
    std::cout << greeting2;
}

//If statements & Operators
void ifStatments_Operators(){

    //If statement
    int age;
    std::cout << "How old are you?";
    std::cin >> age;

    if(age < 13){

        std::cout << "You are not old enough\n";

    } else{
        std::cout << "You are old enough\n";
    }

    //Operators
/*

    Comparison:
    ==   - Is equal to
    !=   - Is not equal to
    < >  - less than, greater than
    <= >= - Less than or equal to, greater than or equal to

    Logical:
    &&   - and
    ||   - or
    !(age == name) - not operator
*/
}

//Switch Statements
void switchStatements(){

    //Switch example
    int age;
    std::cout << "What is your age?";
    std::cin >> age;
    
    switch(age) //type has to be an integer. Double does not work.
    {
        case 13:
            std::cout << "You are 13\n";
            break; //you can also use return 0;
        case 14:
            std::cout << "You are 14\n";
            break;
        default:
            std::cout << "Catch all\n";
            break;

    }

    //Enum Use
    enum season{summer, spring, fall, winter};
    season now = winter;
    
    switch(now){

        case summer:
            break;
        case spring:
            break;
        case fall:
            break;
        case winter:
        std::cout << "Stay warm!\n";
            break;

    }

    //Enum Use with class
    enum class seasons{summer, spring, fall, winter};
    seasons after = seasons::winter;
    
    switch(after){

        case seasons::summer:
            break;
        case seasons::spring:
            break;
        case seasons::fall:
            break;
        case seasons::winter:
            std::cout << "Stay warm!\n";
            break;

    }
}



