#include <iostream>

using namespace std;

// Fund to compute the fibonacci number of n
int fibonacci(int num) {
    if (num <= 1) {
        return num;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    std::cout << "Hello World!" << std::endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}
