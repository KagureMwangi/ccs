#include <stdio.h>
#include <string.h>

struct Employee
{
    int number;
    char name[20];
    float rate;
    int hours;
};

int main()
{
    struct Employee emp1;
    emp1.number = 3465;
    strcpy(emp1.name, "Jones");
    emp1.rate = 4.62;
    emp1.hours = 40;

    printf("Employee Number: %d\n", emp1.number);
    printf("Employee Name: %s\n", emp1.name);
    printf("Hourly Rate: %.2f\n", emp1.rate);
    printf("Hours Worked: %d\n", emp1.hours);

    return 0;
}  
