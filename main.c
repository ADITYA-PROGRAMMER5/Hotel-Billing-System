#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_GUEST 100

struct Guest
{
    int id;
    char name[50];
    float roomCharge;
    float foodCharge;
    float otherExpenses;
};

struct Guest guests[MAX_GUEST];
int guestCount = 0;

void addGuest() {
    if (guestCount >= MAX_GUEST) {
        printf("Maximum Guest Limit Reached!\n");
        return;
    }
    
    struct Guest g1;
    g1.id = guestCount + 1;
    printf("Enter Guest Name: ");
    scanf("%s", g1.name);
    printf("Enter Room Charge: ");
    scanf("%f", &g1.roomCharge);
    printf("Enter Food Charge: ");
    scanf("%f", &g1.foodCharge);
    printf("Enter Other Expenses: ");
    scanf("%f", &g1.otherExpenses);
    guests[guestCount++] = g1;
    printf("Guest Recoed is added\n");
}

void showGuest() {
    if (guestCount == 0)
    {
        printf("\nNo Guest record found\n");
        return;
    }

    printf("\nID:\t\tName:\t\tRoom Charges\t\tFood Charges\t\tOther Expenses\t\tTotal Expenses\n");
    printf("----------------------------------------------------------------------------------------------------------------------");
    
    for (int i = 0; i < guestCount; i++)
    {
        float totalexpense = guests[i].roomCharge + guests[i].foodCharge + guests[i].otherExpenses;
        printf("\n%d\t\t%s\t\t%.2f\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", guests[i].id, guests[i].name, guests[i].roomCharge, guests[i].foodCharge, guests[i].otherExpenses, totalexpense);
    }
    
}

int main() {
    int choice;
    while (1) {
        printf("\nHotel Billing System\n");
        printf("1. Add Guest\n2. View Guests\n3. Update Guest\n4. Delete Guest\n5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            addGuest();
            break;
        
        case 2:
            showGuest();
            break;
        
        default:
            printf("Invalid choice plrase choice a vallid option & try again\n");
            break;
        }

    }
    return 0;
}