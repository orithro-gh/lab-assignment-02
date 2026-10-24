#include <stdio.h>
int main() {
    long long n, rev = 0;
    int digit;
    printf("Enter a number: ");
    scanf("%lld", &n);
    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    printf("Reversed number = %lld\n", rev);
    return 0;
}
