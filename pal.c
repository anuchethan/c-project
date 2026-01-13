#include <stdio.h>

void pal() {
    int num, original, reverse = 0, remainder;
         printf("----------hi----------");
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");


}

