//⁠WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers. 

#include <stdio.h>

int main() {
    int n;
    printf("enter the length of array:");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, second_largest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == largest) {
        printf("No second largest element (all elements equal).\n");
    } else {
        printf("Second largest element = %d\n", second_largest);
    }

    return 0;
}
