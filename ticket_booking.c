#include <stdio.h>
#include <string.h>
#include <conio.h>

// Station Selection Function Declaration
int train(int ticket_price[]) { // Pass ticket_price array as an argument
    printf("=== STATION NUMBER ===");
    printf("\n");

    int station;
    int price = 0;
    printf("Select Between (1-5) : ");
    scanf("%d", &station);

    switch (station) {
        case 1:
            printf("\n");
            printf("You Have Selected For Uttara\n");
            price = ticket_price[0]; // Assign price based on station
            break;
        case 2:
            printf("\n");
            printf("You Have Selected For Pallabi\n");
            price = ticket_price[1];
            break;
        case 3:
            printf("\n");
            printf("You Have Selected For Mirpur\n");
            price = ticket_price[2];
            break;
        case 4:
            printf("\n");
            printf("You Have Selected For Farmgate\n");
            price = ticket_price[3];
            break;
        case 5:
            printf("\n");
            printf("You Have Selected For Motijheel\n");
            price = ticket_price[4];
            break;
        default:
            printf("\n");
            printf("Station Dose'nt Exsist\n");
            break;
    }
    return price; // Return the calculated price
}

// Ticket Quantity Function Declaration
int ticket_quantity() {
    printf("=== TICKET QUANTITY ===");
    printf("\n");

    int quantity;
    printf("Enter (1-6) : ");
    scanf("%d", &quantity);

    switch (quantity) {
        case 1:
            printf("\n");
            printf(" Total Ticket = 1 \n");
            break;
        case 2:
            printf("\n");
            printf("Total Ticket = 2 \n");
            break;
        case 3:
            printf("\n");
            printf("Total Ticket = 3 \n");
            break;
        case 4:
            printf("\n");
            printf("Total Ticket = 4 \n");
            break;
        case 5:
            printf("\n");
            printf("Total Ticket = 5 \n");
            break;
        case 6:
            printf("\n");
            printf("Total Ticket = 6 \n");
            break;
        default:
            printf("\n");
            printf("Sorry! One Person Can'nt Get More Than 6 Tickets\n");
            break;
    }
    return quantity;
}

// Payment Method Function Declaration
void payment() {
    printf("=== PAYMENT METHOD ===");
    printf("\n");

    int pay;
    printf("Pay online (1) / Cash (2): ");
    scanf("%d", &pay);

    if (pay == 1) {
        printf("You Have Payed Through Online Banking\n");
    } else if (pay == 2) {
        printf("You Have Payed Through Cash \n");
    } else {
        printf("Method Not Available\n");
    }
}

// Total Cost
void total_cost(int price) { // Receive price as an argument
    int quantity = ticket_quantity();
    int total = price * quantity;
    printf("Total Cost = %d tk\n", total);
}

// Main Function
int main() {
    char stations[][20] = {"Uttara", "Pallabi", "Mirpur", "Farmgate", "Motijheel"};
    int ticket_price[] = {30, 40, 50, 60, 80};
    int num_station = 5;

    printf("=== METRO STATION CHART ===");
    printf("\n\n");

    for (int i = 0; i < num_station; i++) {
        printf(" == %s - %d tk ==\n", stations[i], ticket_price[i]);
    }

    printf("\n");

    int price = train(ticket_price); // Pass ticket_price and get the price

    printf("\n");

    payment();

    printf("\n");

    total_cost(price); // Pass price to total_cost()

    getch();
    return 0;
}
