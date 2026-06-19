#include <stdio.h>

int main() {
    int customer_id;
    float units, total_bill;

    printf("=== ELECTRICITY BILL GENERATOR ===\n");
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        total_bill = units * 4.50;
    } 
    else if (units <= 300) {
        total_bill = (100 * 4.50) + ((units - 100) * 6.00);
    } 
    else {
        total_bill = (100 * 4.50) + (200 * 6.00) + ((units - 300) * 8.50);
    }

    total_bill += 50.0; // Fixed minimal service charge

    printf("\n--- ELECTRICITY BILL RECEIPT ---\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount to Pay: Rs. %.2f\n", total_bill);

    return 0;
}
