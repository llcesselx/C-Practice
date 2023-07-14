#include <stdio.h>

int main(){
    int firNum, secNum, thirNum, avg = 0;
    printf("You will enter three numbers, this program will print the smallest, largest and the average of the three numbers...\n\n");
    printf("Enter first number:");
    scanf("%d", &firNum);
    printf("Enter second number:");
    scanf("%d", &secNum);
    printf("Enter third number:");
    scanf("%d", &thirNum);

    int large = firNum;
    int small = firNum;

    if (secNum > large && secNum > thirNum) {
        large = secNum;
    }
    if (thirNum > large && thirNum > secNum) {
        large = thirNum;
    }

    if (secNum < small && secNum < thirNum) {
        small = secNum;
    }
    if (thirNum < small && thirNum < secNum) {
        small = thirNum;
    }

    printf("The average of %d, %d, and %d is %d\n", firNum, secNum, thirNum, (firNum+secNum+thirNum)/3);
    printf("The smallest number is %d and the largest is %d\n", small, large);

    return 0;

}
