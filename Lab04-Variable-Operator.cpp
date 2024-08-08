#include <stdio.h>

int main() {
    char Employees_ID[10]; 
    int working_hrs;
    double Salaryamountperhr;
    double Salary;

    printf("Input the Employees ID(Max. 10 chars):\n");
    scanf("%s", &Employees_ID); 

    printf("Input the working hrs:\n");
    scanf("%d", &working_hrs);

    printf("Salary amount/hr:\n");
    scanf("%lf", &Salaryamountperhr);

    Salary = working_hrs * Salaryamountperhr;

    printf("Employees_ID =%s\n", Employees_ID);
    printf("Salary =U$ %.2f\n", Salary);

    return 0;
}//end function