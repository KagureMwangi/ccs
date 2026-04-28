#include <stdio.h>
int main() {
    //variable
    float total_purchase = 8500.00, discount_rate = 0.05, vat_rate = 0.16;
    float final_amount, After_Discount, Discount, VAT;

    //calculations
    Discount = total_purchase * discount_rate;
    After_Discount = total_purchase - Discount;
    VAT = After_Discount * vat_rate;
    final_amount = After_Discount + VAT;

    //output
    printf("-------------------------------------------------------------\n");
    printf("Welcome to Smart Shop\n");
    printf("-------------------------------------------------------------\n\n");
    printf("Total Purchase: \t%.2f\n", total_purchase);
    printf("Discount (5%%): \t\t%.2f\n", Discount);
    printf("After Discount: \t%.2f\n", After_Discount); 
    printf("VAT (16%%): \t\t%.2f\n", VAT);
    printf("---------------------------------------------------------------\n");
    printf("Final Amount :\t\t%.2f\n", final_amount);
    printf("----------------------------------------------------------------\n");



    return 0;
}