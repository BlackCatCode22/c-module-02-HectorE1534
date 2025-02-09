#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;
    std::cout << "Please enter a string!: ";
    std::getline(std::cin, inputString);

    std::reverse(inputString.begin(), inputString.end());

    std::cout << "Reversed string: " << inputString << std::endl;
    return 0;
}