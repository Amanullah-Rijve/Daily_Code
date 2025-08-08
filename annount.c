#include <stdio.h>

int main() {
    printf("Fathers Amount: ");
    int amount1;
    scanf("%d", &amount1);

    printf("Mothers Amount: ");
    int amount2;
    scanf("%d", &amount2);

    printf("Brothers Amount: ");
    int amount3;
    scanf("%d", &amount3);

    /// output 1
    int total = (amount1 + amount2 + amount3);
    printf("Total Money Available: %d\n", total);

    printf("Enter purchase amount: ");
    int purchase;
    scanf("%d", &purchase);

    /// output 2
    printf("Enter Payment method (0 for Mobile Banking, 1 for Hand Cash): ");
    int payment;
    scanf("%d", &payment);

    int discount, remaining;

    switch (payment) {
        case 0:
            printf("You Have Chosen Mobile Banking and you will get 15% offer\n");
            discount = purchase - (purchase * 15 / 100);
            printf("Amount after Discount: %d\n", discount);
            remaining = total - discount;
            printf("Your Remaining Money: %d\n", remaining);
            break;

        case 1:
            printf("You Have Chosen Hand Cash and there is no offer for you\n");
            remaining = total - purchase;
            printf("Your Remaining Money: %d\n", remaining);
            break;

        default:
            printf("Method Not Available\n");
            break;
    }

    return 0;
}
