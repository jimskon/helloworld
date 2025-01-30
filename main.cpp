// This program computes the fibonacci number of a given number n
// By James Skon

#include <iostream>

using namespace std;

static long long c = 0;

// comput the factorial of num
int factorial(long long  num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}

// Fund to compute the fibonacci number of n

int fibonacci(long long num) {
    c+=1;
    if (num <= 1) {
        return num;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    std::cout << "Hello World!" << std::endl;
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is ";
    cout << fibonacci(n) << endl;
    cout << "Number of recursive calls:" << c << endl;

    cout << "Factorial of " << n << " is " << factorial(n) << endl;


    return 0;
}
