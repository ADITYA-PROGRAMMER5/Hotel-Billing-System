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

void updateGuest() {
    int id;
    printf("Enter Guest ID to update: ");
    scanf("%d", &id);
    if (id < 1 || id > guestCount)
    {
        printf("Invalid Id Please Enter valid id\n");
        return;
    }
    struct Guest *g = &guests[id - 1];
    printf("Updating record for %s (ID: %d)\n", g->name, g->id);
    printf("Enter new room charge: ");
    scanf(" %f", &g->roomCharge);
    printf("Enter new food expense: ");
    scanf(" %f", &g->foodCharge);
    printf("Enter new other expenses: ");
    scanf(" %f", &g->otherExpenses);
    printf("\nRecord updated successfully!\n");
}


void deleteGuest() {

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

        case 3:
            updateGuest();
            break;
        
        default:
            printf("Invalid choice plrase choice a vallid option & try again\n");
            break;
        }

    }
    return 0;
}