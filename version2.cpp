
#include <iostream>
using namespace std;

enum Operation {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    int a = 10, b = 5;
    Operation op = ADD;

    switch (op) {
        case ADD:
            cout << "Sum = " << a + b;
            break;

        case SUBTRACT:
            cout << "Difference = " << a - b;
            break;

        case MULTIPLY:
            cout << "Product = " << a * b;
            break;
    }

    return 0;
}
