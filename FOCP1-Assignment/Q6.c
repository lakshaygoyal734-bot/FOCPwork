#include <stdio.h>
#include <math.h>
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;       
        decimal += rem * base;   
        binary /= 10;
        base *= 2;
    }
    return decimal;
}
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, place = 1;

    while (decimal > 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * place;
        place *= 10;
    }

    return binary;
}

int main() {
    int choice;
    long long binary;
    int decimal;

    printf("Number System Converter\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    }
else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
    }
    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}