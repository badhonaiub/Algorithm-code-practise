#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial =1;

    cout << "Enter a non-negative integer: ";
   cin >> n;

    if (n < 0) {
      cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = n; i>=1; i--) {
            factorial = factorial * i;
        }
        cout << "Factorial of " << n << " is " << factorial << endl;
    }

    return 0;
}

