#include <iostream>

int main()
{
    std::cout << "Please enter a positive integer to determine its factors: " << std::endl;

    signed int number;
    std::cin >> number;

    std::cout << "The factors of " << number << " are: " << std::endl;

    std::cout << 1 << std::endl;

    signed int remainder = number;

    for (int i = 2; i <= remainder; i++) {
        while (remainder% i == 0){
            std::cout << i << std::endl;
            remainder/= i;
        }
    }

    std::cout << number << std::endl;
}
