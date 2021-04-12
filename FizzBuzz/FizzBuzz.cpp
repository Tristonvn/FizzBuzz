//This project will print number from 1 to 100, on multples of three fizz will be printed and on multples of five buzz will be printed

#include <iostream>

int main()
{
    for (int i = 1; i < 101; i++) {
        if ((i % 5) == 0 && (i % 3) == 0) {
            std::cout << "FizzBuzz\n";
        }
        else if ((i % 5) == 0) {
            std::cout << "Buzz\n";
        } 
        else if ((i % 3) == 0) {
            std::cout << "Fizz\n";
        }
        else {
            std::cout << i << "\n";
        }

    }
}

