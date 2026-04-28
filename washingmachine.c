#include <stdio.h>
int main() {
    //registration numbers for entry
    int reg1 = 1359;
    int reg2 = 2468;
    int reg3 = 1122;
    int reg4 = 3344;
    int reg5 = 5566;
    //user input for registration number
    int userReg;
    printf("Enter your registration number: ");
    scanf("%d", &userReg);
    //check if the registration number is valid
    int attempt = 3;
    if (userReg != reg1 && userReg != reg2 && userReg != reg3 && userReg != reg4 && userReg != reg5) {
        printf("Access denied. Invalid registration number. Try again\n");
        scanf("%d", &userReg);
        attempt--;
    } 
    if (userReg != reg1 && userReg != reg2 && userReg != reg3 && userReg != reg4 && userReg != reg5) {
        printf("Access denied. Invalid registration number. Try again\n");
        scanf("%d", &userReg);
        attempt--;
    }
  
    if (userReg != reg1 && userReg != reg2 && userReg != reg3 && userReg != reg4 && userReg != reg5) {
        printf("Access denied.\n");
    } else {
        printf("Access granted. machine initialized.\n");
    }
    //menu
    char choice[10];

    printf("\n MACHINE CONTROL MENU\n");
    printf("M101. Washing machine\n");
    printf("M102. Automatic Hand Dryer\n");
    printf("M103. Smart Door System\n");
    printf("M104. Traffic Light System\n");

    printf("Enter machine code: ");
    scanf("%s", choice);
    //SWITCH
    switch (choice[3])
    {
    case '1': {
        int condition;
        printf("\nMachine: Washing machine.\n");
        printf("Select wash cycle:\n");
        printf("1. Quick Wash\n");
        printf("2. Normal Wash\n");
        printf("3. Heavy Wash\n");
        printf("Enter your choice: ");
        scanf("%d", &condition);
        if (condition==1)
        {
            printf("You have selected Quick Wash. Starting the cycle...\n");

        }
        else if (condition==2)
        {
            printf("You have selected Normal Wash. Starting the cycle...\n");
        }
        else if (condition==3)
        {
            printf("You have selected Heavy Wash. Starting the cycle...\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
        
    }
        break;
    case '2': {
        printf("\nMachine: Automatic Hand Dryer.\n");
        printf("Enter condition code: ");
        char handDryerCondition[10];
        scanf("%s", handDryerCondition);
        if (handDryerCondition[0] == 'D') {
            printf("Hand dryer is drying. Please wait...\n");
        } else if (handDryerCondition[0] == 'S') {
            printf("Hand dryer is stopped.\n");
        } else {
            printf("Invalid condition code. Please try again.\n");
        }
    }
        break;
        case '3': {
        printf("\nMachine: Smart Door System.\n");
        printf("Enter condition code: ");
        char doorCondition[10];
        scanf("%s", doorCondition);
        if (doorCondition[0] == 'O') {
            printf("Door is opening...\n");
        } else if (doorCondition[0] == 'C') {
            printf("Door is closing...\n");
        } else {
            printf("Invalid condition code. Please try again.\n");
        }
    }
        break;
    case '4': {
        printf("\nMachine: Traffic Light System.\n");
        printf("Enter condition code: ");
        char trafficLightCondition[10];
        scanf("%s", trafficLightCondition);
        if (trafficLightCondition[0] == 'R') {  
            printf("Traffic light is red. Please stop.\n");
        } else if (trafficLightCondition[0] == 'G') {
            printf("Traffic light is green. You may go.\n");
        } else if (trafficLightCondition[0] == 'Y') {
            printf("Traffic light is yellow. Please prepare to stop.\n");
        } else {
            printf("Invalid condition code. Please try again.\n");
        }
    }
        break;
    default: {
        printf("\nInvalid machine code. Please try again.\n");
    }
        break;
    }
  
  
  
    
    return 0;
}
