#include <stdio.h>
#include <string.h>

int main()
{
    char item[30] = "";
    float price = 0.0f;
    int quantity = 0;

    printf("What item would you like to buy: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0';       // to reove extra new line
    printf("What is the price of each: $");
    scanf("%f", &price);
    printf("How many would you like: ");
    scanf("%d", &quantity);

    float total = price*quantity;
    printf("You bought %d, %s for $%.2f", quantity, item, total);

    return 0;
}