#include <stdio.h>

int main(){
    int value = 0;
    puts("Enter starting value:");
    scanf("%d", &value);
    puts("");
    printf("A\tA+2\tA+4\tA+6\n");
    puts("-----------------------------");

    int row = 0;
    int num = value;
    while(row < 5) {
        printf("%d\t%d\t%d\t%d\n", num, num+2, num+4, num+6);
        row++;
        num += value;
    }
  return 0;
}
