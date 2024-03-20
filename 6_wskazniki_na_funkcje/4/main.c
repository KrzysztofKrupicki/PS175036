#include <stdio.h>
#include <stdlib.h>

double calculateOperation(double (*operation)(double, double), double number1, double number2){
    return operation(number1, number2);
}

double foo(double number1, double number2){
    return number1 * number2;
}

int main()
{
    printf("%lf", calculateOperation(foo, 5, 8));
    return 0;
}
