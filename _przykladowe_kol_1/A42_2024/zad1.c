#include <stdio.h>

int main() {
    int a = 2; // a = 2, b = 16, c = 0
    int b = 5;  // a = 2, b = 5, c = 0
    int c = 4;  // a = 2, b = 5, c = 4
    a = a + b;  // a = 7, b = 5, c = 4
    b = a - b;  // a = 7, b = 2, c = 4
    a = a - b;  // a = 5, b = 2, c = 4
    c = a;      // a = 5, b = 2, c = 5
    a = b * c;  // a = 10, b = 2, c = 5
    b = a / c;  // a = 10, b = 2, c = 5
    c = b << 4; // a = 10, b = 2, c = 32
    b = c >> 5; // a = 10, b = 1, c = 32
    a = b & c;  // a = 0, b = 1, c = 32
    c = a ^ b;  // a = 0, b = 1, c = 1
    b = ~c;     // a = 0, b = -2, c = 1
    return 0;
}
