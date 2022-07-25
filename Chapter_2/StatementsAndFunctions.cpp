#include <iostream>

// function declaration
int addNumbers(int first_number, int second_number);
int main()
{
    int first_number{13}; // statement
    int second_number{7};

    std::cout << "First number : " << first_number << std::endl;   // 13
    std::cout << "Second number : " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    // function call
    sum = addNumbers(25, 7);
    std::cout << "Sum : " << sum << std::endl; // 30

    // function call
    sum = addNumbers(30, 54);
    std::cout << "Sum : " << sum << std::endl; // 84

    // function call
    std::cout << "Sum : " << addNumbers(3, 42) << std::endl; // 45

    return 0;
}

// function definition
int addNumbers(int first_number, int second_number)
{
    int result = first_number + second_number;
    return result;
}