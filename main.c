#include <stdio.h>

int guestCount = 0;
int maxGuest = 100;

struct Guest
{
    int id;
    char name[50];
    float roomCharge;
    float foodCharge;
    float otherExpenses;
};

void addGuest() {
    if (guestCount >= maxGuest) {
        printf("Maximum Guest Limit Reached!\n");
    }
    
    struct Guest g1;
    g1.id = guestCount + 1;
    printf("Enter Guest Name: ");
    scanf("%s", &g1.name);
    printf("Enter Room Charge: ");
    scanf("%f", &g1.roomCharge);
    printf("Enter Food Charge: ");
    scanf("%f", &g1.foodCharge);
    printf("Enter Other Expenses: ");
    scanf("%f", &g1.otherExpenses);
    printf("Guest Recoed is added\n");
}

int main () {
    
    return 0;
}