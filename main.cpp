#include <iostream>

using namespace std;

static long long c = 0;

// Fund to compute the fibonacci number of n
int fibonacci(long long n) {
    c+=1;
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
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
