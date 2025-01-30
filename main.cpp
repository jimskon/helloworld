#include <iostream>

using namespace std;

static int c = 0;

// Fund to compute the fibonacci number of n
int fibonacci(int num) {
    c+=1;
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
    cout << "Number of recursive calls:" << c << endl;

    return 0;
}
