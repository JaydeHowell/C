#include <stdio.h>
#include <math.h>

//main calculator functions
int calculateSum(int x, int y);
int calculateDifference(int x, int y);
int calculateProduct(int x, int y);
float calculateQuotient(int x, int y);

//secondary calculator functions
float squareRoot(int x);
int calculateExponent(int base, int power);
float calculateLogarithm(int x);

int main () {
    printf("The sum is %d\n", calculateSum(5, 3));
    printf("The difference is %d\n", calculateDifference(19, 17));
    printf("The product is %d\n", calculateProduct(8, 11));
    printf("The quotient is %f\n", calculateQuotient(1, 10));
    printf("The square root is %f\n", squareRoot(83));
    return 0;
}

//primary functions
int calculateSum(int x, int y) {
    return x + y;
}

int calculateDifference(int x, int y) {
    return x - y;
}

int calculateProduct(int x, int y) {
    return x * y;
}

float calculateQuotient(int x, int y) {
    return (float) x / y;
}

//secondary functions
float squareRoot(int x) {
    return sqrt(x);
}

int calculateExponent(int base, int power) {
    return pow(base, power);
}

float calculateLogarithm(int x) {
    return log10f(x);
}