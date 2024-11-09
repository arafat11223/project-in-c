#include <stdio.h>

int main()
{
    int code, quantity;
    double price, amount, totalamount = 0, cash, change;
    char addanother;

    do {
        // Optional: Clear screen (works in Windows, for portability remove or replace with something else)
        // system("cls");

        // Display Menu
        printf("==================\n");
        printf("Pizza Box Menu\n");
        printf("==================\n\n");
        printf("[1] BBQ Meaty Machine Pizza\t\t price = 350.00\n");
        printf("[2] Meaty Onion Pizza\t\t\t price = 320.00\n");
        printf("[3] Sausage Carnival Pizza\t\t price = 350.00\n");
        printf("[4] Tender Beef Pizza\t\t\t price = 370.00\n");
        printf("[5] Mac & Cheese Pizza\t\t\t price = 400.00\n\n");

        // Input Pizza Code and Quantity
        printf("Enter pizza code: ");
        scanf("%d", &code);

        // Validate the pizza code
        if (code < 1 || code > 5) {
            printf("Invalid pizza code! Please choose a number between 1 and 5.\n");
            continue;  // Skip to the next iteration of the loop
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Validate quantity
        if (quantity <= 0) {
            printf("Invalid quantity! Please enter a positive number.\n");
            continue;  // Skip to the next iteration of the loop
        }

        // Set price based on selected code
        switch (code) {
            case 1: price = 350.00; break;
            case 2: price = 320.00; break;
            case 3: price = 350.00; break;
            case 4: price = 370.00; break;
            case 5: price = 400.00; break;
        }

        // Calculate the amount for the current order
        amount = price * quantity;
        printf("\nAmount for this order: %.2lf\n", amount);

        // Update total amount
        totalamount += amount;
        printf("Total amount so far: %.2lf\n", totalamount);

        // Ask if the user wants to add another order
        printf("\nAdd another order? (y/n): ");
        getchar();  // Consume the newline character left by previous input
        addanother = getchar();

    } while (addanother == 'Y' || addanother == 'y');

    // Handle cash input and change calculation
    do {
        printf("\nEnter cash amount: ");
        scanf("%lf", &cash);

        // Check if the entered cash is sufficient
        if (cash < totalamount) {
            printf("Insufficient cash! You need %.2lf more.\n", totalamount - cash);
        }

    } while (cash < totalamount);

    // Calculate and display change
    change = cash - totalamount;
    printf("\nChange: %.2lf\n", change);
    printf("\nThank you for your order! Come again!\n");

    return 0;
}