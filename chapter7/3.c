// Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address.

#include <stdio.h>

union Address {
    char home_address[200];
    char hostel_address[200];
};

int main() {
    union Address addr;
    int choice;

    printf("Where do you currently live?\n");
    printf("1. Home\n");
    printf("2. Hostel\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("\n");
    printf("Enter your present address: ");
    scanf(" %[^\n]", (choice == 1) ? addr.home_address : addr.hostel_address);

    if (choice == 1) {
        printf("\nYour present address is: %s\n", addr.home_address);
    } else {
        printf("\nYour present address is: %s\n", addr.hostel_address);
    }

    return 0;
}
