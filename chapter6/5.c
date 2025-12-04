//Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.

#include <stdio.h>

void REVERSE(char str[]) {
    int start = 0;
    int end = 0;

    // Find length (until we hit '\0')
    while (str[end] != '\0') {
        end++;
    }
    end--;   // end now points to the last valid character

    // Reverse using two-pointer method
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
