#include <stdio.h>

int main() {
    float length1, breadth1, length2, breadth2, length3, breadth3;
    float perimeter1, perimeter2, perimeter3;
    
    printf("Enter the length and breadth of the first rectangle: ");
    scanf("%f %f", &length1, &breadth1);
    printf("Enter the length and breadth of the second rectangle: ");
    scanf("%f %f", &length2, &breadth2);
    printf("Enter the length and breadth of the third rectangle: ");
    scanf("%f %f", &length3, &breadth3);

    perimeter1 = 2 * (length1 + breadth1);
    perimeter2 = 2 * (length2 + breadth2);
    perimeter3 = 2 * (length3 + breadth3);

    float maxPerimeter = (perimeter1 > perimeter2) ? ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) : ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);

    printf("The rectangle with the highest perimeter has a perimeter of: %.2f\n", maxPerimeter);

    return 0;
}
