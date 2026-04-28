#include <stdio.h>
int main() {
    //variable
    float basic_salary =50000.00, tax_rate = 0.15, allowance = 0.2;
    float net_salary, tax, Allowance;
    
    //calculations
    Allowance = basic_salary *allowance;
    tax = basic_salary * tax_rate;
    net_salary = basic_salary + Allowance - tax;

    //output
    printf("-------------------------------------------------------------\n\n");
    printf("\t Employee Salary Breakdown\n");
    printf("-------------------------------------------------------------\n\n");
    printf("Basic Salary: \t\t%.2f\n", basic_salary);
    printf("Allowance (20%%): \t%.2f\n",Allowance);
    printf("Tax (15%%): \t\t %.2f\n", tax);
    printf("-------------------------------------------------------------\n\n");
    printf("Net Salary: \t\t%.2f\n", net_salary);
    printf("-------------------------------------------------------------\n");


    return 0;
}