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
    struct Employee emp[3];
    int i;
    printf("Enter details for 6 employees:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Enter employee number: ");

        scanf("%d", &emp[i].number);
        printf("Enter employee name: ");

        scanf("%s", emp[i].name);
        printf("Enter hourly rate: ");
        scanf("%f", &emp[i].rate);

        printf("Enter hours worked: ");
        scanf("%d", &emp[i].hours);

        printf("\nEmployee details:\n");
        printf("----------------------\n");
    }

    printf("\n Number \t Name \t\t Hourly Rate \t Hours Worked\n");
    printf("-------------------------------------------------------------\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d \t\t %s\t\t %.2f \t\t %d\n", 
            emp[i].number, 
            emp[i].name, 
            emp[i].rate, 
            emp[i].hours);
    }

    

    return 0;
}  
