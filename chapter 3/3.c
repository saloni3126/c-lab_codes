#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Input the coordinates of the three points
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    // Check if the points are collinear
    if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}
