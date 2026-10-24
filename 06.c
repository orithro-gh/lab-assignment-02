#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;
    do {
        count++;
        n /= 10;
    } while (n != 0);
    printf("Number of digits = %d\n", count);
    return 0;
}
