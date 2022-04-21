#include <stdio.h>
#include <stdbool.h>

int main() {
    // Math Operators
    int a = 33;
    int b = 15;
    int result = 0;

    result = a + b;
    printf("Result is : %d \n" , result);

    result = a - b;
    printf("Result is : %d \n" , result);

    result = a / b;
    printf("Result is : %d \n" , result);

    result = a % b;
    printf("Result is : %d \n" , result);

    result = a * b;
    printf("Result is : %d \n" , result);


    // printf("Result is : %d \n" , a++);
    printf("Result is : %d \n" , ++a);

    // printf("Result is : %d \n" , a--);
    printf("Result is : %d \n" , --a);

    // Login Operators
    bool c = false;
    bool d = false;
    bool resultBool;

    resultBool = !(c || d);

    printf("\n- Result of bool [ %d ]" , resultBool);

    // Assignment Operators


    return 0;
}
