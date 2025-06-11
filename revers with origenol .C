#include <stdio.h>

int main() {
    int n, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n; // Store the original value
    int r = 0;

    while(n > 0) {
        r = r * 10 + (n % 10);
        n = n / 10;
    }

    printf("The reversed number is %d.", r);
    int sum = original + r;
    printf("\nAnd the sum of both values is %d\n", sum);
    
    return 0;
}