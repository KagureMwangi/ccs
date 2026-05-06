#include <stdio.h>
 struct machine
 {
    int machineid;
    float temperature;
    char status;
 };

 int main() {
    struct machine mech[3];
    int i;
    printf("Enter details for 3 machines:\n");
    for (i = 0; i < 3; i++) 
    {
        printf("Machine %d:\n", i + 1);
        printf("Enter machine ID: ");
        scanf("%d", &mech[i].machineid);
        printf("Enter temperature: ");
        scanf("%f", &mech[i].temperature);
        printf("Enter status (O for operational, M for maintenance): ");
        scanf(" %c", &mech[i].status); // Note the space before %c to consume any leftover newline character

        printf("machine details:\n");
        printf("----------------------\n");
    }
        for ( i=0; i < 3; i++ )
        {
            printf("\n Machine %d:\n", i + 1);
            printf("Machine ID: %d\n", mech[i].machineid);
            printf("Temperature: %.2f\n", mech[i].temperature);
            printf("Status: %c\n", mech[i].status);
        }
        

     return 0;

 }