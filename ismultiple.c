#include <stdio.h>

int main() {
    int num = 0;
    int num2 = 0;

    puts("Enter 1st number:");
    scanf("%d", &num);
    puts("Enter 2nd number:");
    scanf("%d", &num2);

    if (num2%num == 0) {
        printf("%d is a multiple of %d", num, num2);
    }
    else {
        printf("%d is NOT a multiple of %d", num, num2);
    }
    return 0;
}
