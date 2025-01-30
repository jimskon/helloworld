// A crazy program created by James Skon, Kenyon College, 2025
#include <iostream>

using namespace std;

static long long c = 0;

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
    cout << fibonacci(n) << endl;
    cout << "Number of recursive calls:" << c << endl;

    return 0;
}
