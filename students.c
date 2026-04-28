#include <stdio.h>
int main() {
    
    //variable
    int math = 78, english =85, science = 90;
    int Total;
    float Average;
    char *grade = "A", *grade2 = "F";

    //calculations
    Total = math +english + science;
    Average = Total / 3.0;
    if (Average > 80.00)
    {
      printf("Grade: %s\n", grade);
    }
    else
    {
      printf("Grade: %s\n", grade2);
    }

    //output
    printf("-------------------------------------------------------------\n\n");
    printf(" Student Result Summary\n");
    printf("-------------------------------------------------------------\n\n");
    printf(" Math: \t\t%d\n", math);
    printf(" English: \t%d\n", english);
    printf(" Science: \t%d\n", science);
    printf("-------------------------------------------------------------\n\n");
    printf(" Total: %d\n", Total);
    printf(" Average: %.2f\n", Average);
    printf(" Grade: %s\n", (Average > 80.00) ? grade : grade2);
    printf("-------------------------------------------------------------\n");
    return 0;
}