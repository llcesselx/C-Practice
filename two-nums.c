#include <stdio.h>

int main(void) {
    int firstNum, secNum = 0;

    printf("Enter first number:");
    scanf("%d", &firstNum);
    printf("Enter second number:");
    scanf("%d", &secNum);

    printf("Sum: %d\n", firstNum+secNum);
    printf("Differences: %d - %d = %d  | %d - %d = %d\n", firstNum, secNum, firstNum-secNum, secNum, firstNum, secNum-firstNum);
    printf("Product: %d\n", firstNum * secNum);
    printf("Divided: %d / %d = %d  |  %d / %d = %d\n", firstNum, secNum, firstNum/secNum, secNum, firstNum, secNum/firstNum);

    return 0;
}