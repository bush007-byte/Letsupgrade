#include <stdio.h>

int main() 
{
  int n, reverse = 0, remainder, number;
    printf("Enter an integer: ");
    scanf("%d", &n);
    number = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if (number == reverse)
        printf("%d is a palindrome.", number);
    else
        printf("%d is not a palindrome.", number);

    return 0;
}
