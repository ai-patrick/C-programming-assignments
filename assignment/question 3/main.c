#include <stdio.h>
int main()
{
    char next_customer;

do {
        int credit_limit, price, quantity_of_items_purchased,value_of_goods ;

    printf("Enter your credit limit.\n");
    scanf("%d", &credit_limit);

    printf("Enter the price.\n");
    scanf("%d", &price);
    do {

    printf("Quantitiy of items of purchase.\n");
    scanf("%d", &quantity_of_items_purchased);

    value_of_goods = quantity_of_items_purchased * price;

     if (value_of_goods > credit_limit){
    printf("Sorry you cannot purchase goods worthy such a value on credit.\n");
    printf("Re enter a lower quantity.\n");
    printf("---------------------------\n");

     }
     }
     while (value_of_goods > credit_limit);

  printf("The total is.\n %d\n", value_of_goods);
printf("THANK YOU FOR SHOPPING FROM US :)\n");
printf("---------------------------------\n");

    printf("Next Customer? (Y/N)\n");
    scanf(" %c", &next_customer);
}
while (next_customer == 'y');return 0;
}
