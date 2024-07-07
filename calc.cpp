#include <iostream>

// Calc stands for calculator chat, I'm just using slang

int main() {
    int num1;
    int num2;
    char operation;
    int result;

    std::cout << "Type the first number: " << '\n';
    std::cin >> num1;
    std::cout << "Type the second number: " << '\n';
    std::cin >> num2;

    std::cout << "Select an operator: (+, -, *, /)" << '\n';
    std::cin >> operation;

    if (operation == '+') {
        result = num1 + num2;
        std::cout << "The result is: " << result;
    }

    if (operation == '-') {
        result = num1 - num2;
        std::cout << "The result is: " << result;
    }

    if (operation == '*') {
        result = num1 * num2;
        std::cout << "The result is: " << result;
    }

    if (operation == '/') {
        result = num1 + num2;
        std::cout << "The result is: " << result;
    }


    return 0;
}