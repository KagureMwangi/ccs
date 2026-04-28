#include <stdio.h>

int main() {
    //variable
    int qty1 =2, qty2 = 5;
    float price1 = 500.00, price2 = 50.00;
    float total1, total2, subtotal;
    float tax_rate = 0.1, tax;
    float Total;
    char *item1 = "Book", *item2 = "Pen";

    //calculations
    total1 = qty1 * price1;
    total2 = qty2 * price2;
    subtotal = total1 + total2;
    tax = subtotal * tax_rate;
    Total = subtotal + tax;

    //output
    printf("----------------------------------------------------------------------\n\n");
    printf("\tItem \t\t Qty \t\t Price \t\t Total\n");
    printf("\t%s \t\t %d \t\t %.2f\t\t %.2f\n", item1, qty1, price1, total1);
    printf("\t%s \t\t %d \t\t %.2f\t\t %.2f\n", item2, qty2, price2, total2);
    printf("----------------------------------------------------------------------\n\n");
    printf("\t Subtotal:\t\t %.2f\n", subtotal);
    printf("\t Tax (10%%):\t\t %.2f\n", tax);
    printf("\t Total:\t\t\t %.2f\n", Total);
    printf("-----------------------------------------------------------------------\n");


    return 0;
}