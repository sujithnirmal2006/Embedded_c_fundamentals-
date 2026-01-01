#include <stdio.h>
int main() {
    int num, temp, digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0) {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}
