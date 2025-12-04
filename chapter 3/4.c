#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
const char* getDayOfWeek(int dayNumber) {
    const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    return days[dayNumber % 7];
}
int main() {
    int year, i;
    int dayOfWeek = 0;
    printf("Enter the year: ");
    scanf("%d", &year);
for (i = 1; i < year; i++) {
        if (isLeapYear(i)) {
            dayOfWeek += 2;
        } else {
            dayOfWeek += 1;
        }
    }
printf("1st January %d is a %s.\n", year, getDayOfWeek(dayOfWeek));
return 0;
}
