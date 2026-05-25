#include <stdio.h>
#include <string.h>
#define MAX_ITEMS 50
#define TAX_RATE 0.16

//structure for item details
struct Item
{
    char name[30];
    int quantity;
    float unitprice;
    int total;
};

// function declarations
void companyHeader();
float calculateSubtotal(struct Item items[], int n);
float calculateDiscount(float subtotal);
float calculateTax(float amount);
void printInvoice(struct Item items[] , int n, char customerName[]);

int main()
{
    struct Item items[MAX_ITEMS];
    char customername[50];
    int numitems;
    int i;

    printf("====================================\n");
    printf("KAGURES BAKES & BOBA CAFE");
    printf("\n====================================\n");

    //Ccustomer details
    printf("Enter customer name: ");
    scanf("%[^\n]", customername);

    //number of items
    printf("Enter number of items purchased: ");
    scanf("%d", &numitems);

    //control statement to check if the number of items is within the limit
    if (numitems > MAX_ITEMS)
    {
        printf("Error: Maximum number of items is %d.\n", MAX_ITEMS);
        return 1;
    }

    //loop for entering item details
    for (i = 0; i < numitems; i++)
    {
        printf("Enter name of item %d: ", i + 1);
        scanf("%s", items[i].name);
        printf("Enter quantity of item %d: ", i + 1);
        scanf("%d", &items[i].quantity);
        printf("Enter unit price of item %d: ", i + 1);
        scanf("%f", &items[i].unitprice);
        items[i].total = items[i].quantity * items[i].unitprice;
    }

    //operator calculations and invoice printing
    items[i].total = items[i].quantity * items[i].unitprice;
    
    //print invoice
    printInvoice(items, numitems, customername);


    return 0;
}

//function to print company header
void companyHeader()
{
    printf("====================================\n");
    printf("KAGURES BAKES & BOBA CAFE\n");
    printf("NYERI'S SWEETEST BOBA TEA CHOICE!!\n");
    printf("====================================\n");
}

//function to calculate subtotal
float calculateSubtotal(struct Item items[], int n)
{
    float subtotal = 0.0;
    int i;

    for (int i = 0; i < n; i++)
    {
        subtotal += items[i].total;
    }
    return subtotal;
}

//function to calculate discount
float calculateDiscount(float subtotal)
 {

    // Control statement
    if(subtotal >= 5000) {
        return subtotal * 0.10; // 10% discount
    }
    else if(subtotal >= 3000) {
        return subtotal * 0.05; // 5% discount
    }
    else {
        return 0;
    }
}

//function to calculate tax
float calculateTax(float amount)
{
    return amount * TAX_RATE;
}

//Function to print invoice
void printInvoice(struct Item items[], int n, char customerName[]) {

    float subtotal, discount, tax, grandTotal;
    int i;

    subtotal = calculateSubtotal(items, n);

    discount = calculateDiscount(subtotal);

    tax = calculateTax(subtotal - discount);

    grandTotal = subtotal - discount + tax;

    companyHeader();

    printf("Customer Name: %s\n", customerName);

    printf("---------------------------------------------------\n");
    printf("%-20s %-10s %-10s %-10s\n",
           "Item", "Qty", "Price", "Total");

    printf("---------------------------------------------------\n");

    // Loop to display items
    for(i = 0; i < n; i++) {

        printf("%-20s %-10d %-10.2f %-10.2f\n",
               items[i].name,
               items[i].quantity,
               items[i].unitprice,
               items[i].total);
    }

    printf("---------------------------------------------------\n");

    printf("Subtotal:           KES %.2f\n", subtotal);
    printf("Discount:           KES %.2f\n", discount);
    printf("VAT (16%%):          KES %.2f\n", tax);
    printf("Grand Total:        KES %.2f\n", grandTotal);

    printf("===================================================\n");
    printf("   THANK YOU FOR SHOPPING WITH US!\n");
    printf("     Enjoy Your Boba & Fresh Pastries!\n");
    printf("===================================================\n");
}

