#include <stdio.h>

int main() {
    //variable
    int qty1 = 1000, qty2 = 3000; 
    float price1 = 50.0, price2 = 10.0;
    float total1, total2, subtotal;
    float discount_rate = 0.05, discount;
    float subtotal_after_discount;
    float tax_rate = 0.086, tax;
    float shipping = 520.0;
    float order_total;

    //calculations
    total1 = qty1 * price1;
    total2 = qty2 * price2;
    subtotal = total1 + total2;
    discount = subtotal * discount_rate;
    subtotal_after_discount = subtotal - discount;
    tax = subtotal_after_discount * tax_rate;
    order_total = subtotal_after_discount + tax + shipping;

    //output
    printf("------------------------------------------------------------\n\n");
    printf("Qty \t\t Unit price \t\t Total price \n\n");
    printf("%d\t\t $%.2f\t\t\t $%.2f\n", qty1, price1, total1);
    printf("%d\t\t $%.2f\t\t\t $%.2f\n\n" , qty2, price2, total2);
    printf("------------------------------------------------------------\n\n");
    printf("\t Subtotal:\t\t\t $%.2f\n", subtotal);
    printf("\t Discount:\t\t\t  %.2f%%\n", discount_rate * 100);
    printf("\t Total discount:\t\t $%.2f\n", discount);
    printf("\t Subtotal less discount:\t $%.2f\n", subtotal_after_discount);
    printf("\t Tax rate:\t\t\t  %.2f%%\n", tax_rate*100);
    printf("\t Total tax:\t\t\t $%.2f\n", tax);
    printf("\t Shipping & handling:\t\t $%.2f\n", shipping);
    printf("\t Order total:\t\t\t $%.2f\n", order_total);
    printf("-------------------------------------------------------------------\n");

    return 0;
}