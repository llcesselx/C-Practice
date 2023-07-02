#include <stdio.h>

int main(void){
    int numOne;
    int numTwo;
    int numThree;
    int numFour;

    puts("You will enter four integers and this program will print out the largest");
    puts("Enter first number...");
    scanf("%d", &numOne);
    puts("Enter second number...");
    scanf("%d", &numTwo);
    puts("Enter third number...");
    scanf("%d", &numThree);
    puts("Enter fourth number...");
    scanf("%d", &numFour);

    if(numOne > numTwo && numOne > numThree && numOne > numFour){
        printf("Largest number is %d", numOne);
    }
    if(numTwo > numOne && numTwo > numThree && numTwo > numFour){
        printf("Largest number is %d", numTwo);
    }
    if(numThree > numOne && numThree > numTwo && numThree > numFour){
        printf("Largest number is %d", numThree);
    }
    if(numFour > numOne && numFour > numTwo && numFour > numThree){
        printf("Largest number is %d", numFour);
    }

    return 0;
}
