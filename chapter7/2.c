//Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary. 
#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[100];
    float basic_pay;
    float gross_salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees (max %d): ", MAX_EMPLOYEES);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf(" %[^\n]", employees[i].name);
        printf("Enter basic pay of employee %d: ", i + 1);
        scanf("%f", &employees[i].basic_pay);

        float da = 0.52 * employees[i].basic_pay; // Calculate DA
        employees[i].gross_salary = employees[i].basic_pay + da; // Calculate gross salary
    }

    printf("\nEmployee Name\tGross Salary\n");
    printf("-------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%.2f\n", employees[i].name, employees[i].gross_salary);
    }

    return 0;
}
