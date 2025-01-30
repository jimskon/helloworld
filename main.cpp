#include <iostream>

using namespace std;

// Fund to compute the fibonacci number of n
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::cout << "Hello World!" << std::endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}
