#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#include <iomanip>
int main()
{

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***********CALCULATOR***********\n";

    std::cout << "enter ethir (+ - * /): ";
    std::cin >> op;

    std::cout << "enter num1: ";
    std::cin >> num1;

    std::cout << "enter num2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result: " << result << '\n';
        break;
    default:
        std::cout << "thats not vaild: ";
        break;
    }
    std::cout << "********************************";

    return 0;
}