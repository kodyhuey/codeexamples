#include<stdio.h>

int power(int x, int n) {
    int ret = 1;
    for(int ii=0;ii<n;ii++) {
        ret = ret * x;
    }
    return ret;
}

int max(int a, int b) {
    int ret = a;
    if (b > a) {
        ret = b;
    }
    return ret;
}


/* First parameter "int (*fptr)(int, int)" is a function pointer to a 
 *  function that takes 2 int parameters and returns an int */
int do_something(int (*fptr)(int, int), int x, int y) {
    /* evaluate the function pointed to by ftpr with x & y as parameters */
    return (*fptr)(x, y);
}


int main() {
    int num1 = 5;
    int num2 = 7;

    int (*functionptr)(int, int);  /* Pointer to a function */

    printf("Calling functions directly:\n");
    printf("  power(num1, num2) = %d\n", power(num1, num2));
    printf("  max(num1, num2) = %d\n", max(num1, num2));

    printf("\nCalling functions using a function pointer:\n");
    functionptr = power;
    printf("  power(num1, num2) = %d\n", (*functionptr)(num1, num2));
    functionptr = max;
    printf("  max(num1, num2) = %d\n", (*functionptr)(num1, num2));

    printf("\nCalling functions using a function:\n");
    functionptr = power;
    printf("  power(num1, num2) = %d\n", do_something(power, num1, num2));
    functionptr = max;
    printf("  max(num1, num2) = %d\n", do_something(max, num1, num2));

    return 0;
}
