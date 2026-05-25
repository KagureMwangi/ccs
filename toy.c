#include <stdio.h>

void displayToyMenu() {
    printf("\n TOY CONTROL MENU\n");
    printf("T201. Remote Control Car\n");
    printf("T202. Interactive Robot\n");
    printf("T203. Smart Puzzle\n");
    printf("T204. Educational Tablet\n");
}

int main() {
    displayToyMenu();
    char choice[10];
    printf("Enter toy code: ");
    scanf("%s", choice);
    
    switch (choice[3]) {
    case '1': {
        printf("\nToy: Remote Control Car.\n");
        printf("Enter condition code: ");
        char carCondition[10];
        scanf("%s", carCondition);
        if (carCondition[0] == 'F') {
            printf("Car is moving forward.\n");
        } else if (carCondition[0] == 'B') {
            printf("Car is moving backward.\n");
        } else if (carCondition[0] == 'L') {
            printf("Car is turning left.\n");
        } else if (carCondition[0] == 'R') {
            printf("Car is turning right.\n");
        } else {
            printf("Invalid condition code. Please try again.\n");
        }
    }
        break; 


    case '2': {
        printf("\nToy: Interactive Robot.\n");
        printf("Enter condition code: ");
        char robotCondition[10];
        scanf("%s", robotCondition);
        if (robotCondition[0] == 'W') {
            printf("Robot is walking.\n");
        } else if (robotCondition[0] == 'T') {
            printf("Robot is talking.\n");
        } else if (robotCondition[0] == 'D') {
            printf("Robot is dancing.\n");
        } else {
            printf("Invalid condition code. Please try again.\n");
        }
    }


        break;
    case '3': {
        printf("\nToy: Smart Puzzle.\n");
        printf("Enter condition code: ");
        char puzzleCondition[10];
        scanf("%s", puzzleCondition);
        if (puzzleCondition[0] == 'S') {
            printf("Puzzle is solved.\n");
        } else if (puzzleCondition[0] == 'U') {
            printf("Puzzle is unsolved.\n");
        } else {
            printf("Invalid condition code. Please try again.\n");
        }   
    }


        break;
    case '4': {
        printf("\nToy: Educational Tablet.\n");
        printf("Enter condition code: ");
        char tabletCondition[10];
        scanf("%s", tabletCondition);
        if (tabletCondition[0] == 'O') {
            printf("Tablet is on.\n");
        } else if (tabletCondition[0] == 'F') {
            printf("Tablet is off.\n");
        } else {
            printf("Invalid condition code. Please try again.\n");
        }
    }


        break;
        return 0;
        default:
            printf("Invalid toy code. Please try again.\n");
}
        