#include <stdio.h>

int main() {
    float price;

    printf("Enter the total price excluding VAT (in DA): ");
    scanf("%f", &price);

    price = price + price * 0.2;

    if (price > 2000) {
        price = price - price * 0.15;
    }

    printf("Total amount including VAT: %.2f DA\n", price);

    return 0;
}