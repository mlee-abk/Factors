#include <iostream>

int main()
{
    std::cout << "Please enter a positive integer to determine its factors: " << std::endl;

    signed int number;
    std::cin >> number;

    std::cout << "The factors of " << number << " are: " << std::endl;

    for (int i = 2; i <= number; i++) {
        while (number % i == 0){
            std::cout << i << std::endl;
            number /= i;
        }
    }
}
