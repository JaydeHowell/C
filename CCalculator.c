#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//parser struct to go through trees and keep track of positions/consumed tokens
typedef struct tokenParser {
    char* tokens;
    int numTokens;
    int pos;
} tokenParser;

//expression tree to hold the expression
typedef struct expressTree {
    char type;
    int value;
    struct expressTree* left;
    struct expressTree* right;
} expressTree;

#define VALIDTOKENS "+-*/0123456789()"

#define MAXIMUMCHARS 100

//declarations
char* tokenize(char*);
expressTree* parse(char*);
int calculate(expressTree*);
int numberX;
int numberY;

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
    printf("Enter the first number: ");
    scanf("%d", &numberX);
    printf("Enter the second number: ");
    scanf("%d", &numberY);
    printf("The sum is %d\n", calculateSum(numberX, numberY));
    printf("The difference is %d\n", calculateDifference(numberX, numberY));
    printf("The product is %d\n", calculateProduct(numberX, numberY));
    printf("The quotient is %.2f\n", calculateQuotient(numberX, numberY));
    printf("The square root is %.2f\n", squareRoot(numberX));
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