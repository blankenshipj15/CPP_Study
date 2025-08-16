// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    
    double targetX;
    int32_t spriteX;
    uint32_t playerX;

    targetX = -123.45;
    spriteX = targetX;
    playerX = targetX;

    std::cout << "Target X (double): " << targetX << std::endl;
    std::cout << "Sprite X (integer): " << spriteX << std::endl; 
    std::cout << "Target X (unsigned integer): " << static_cast<int32_t>(playerX) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
