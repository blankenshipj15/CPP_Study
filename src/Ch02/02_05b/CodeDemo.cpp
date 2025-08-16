// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // these are global variables, not preferred. try to keep variables local

int main(){
    
    bool myFlag; // this is a local variable
    a = 7;
    myFlag = false;

    std::cout << "a = " << a << ", b = " << b << ", and flag = " << myFlag << "." <<   std::endl;

    myFlag = true;
    std::cout << "a + b = " << a+b << " and flag = " << myFlag << "." <<   std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
