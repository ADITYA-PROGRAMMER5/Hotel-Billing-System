#include <stdio.h>

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
    guests[guestCount++] = g1;
    printf("Guest Recoed is added\n");
}

int main () {

    return 0;
}