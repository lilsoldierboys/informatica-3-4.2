#include <stdio.h>
int main(void){
    char item[50];
    float price;
    int quantity;
    printf("Item? \n");
    scanf("%s",&item);

    printf("Price? \n" );
    scanf("%f",&price);


    printf("Quantity? \n" );
    scanf("%d",&quantity);

    float total = price*quantity;

    printf("\n");

    printf("**********************************\n");
    printf("Sweatshops R us\n");
    printf("**********************************\n");
    printf("Item\tQuantity\tPrice\n");
    printf("%s\t%d\t\t$%.2f\n",item,quantity,price);
    printf("----------------------------------\n");
    printf("Total\t\t\t$%.2f\n",total);
    printf("----------------------------------\n");
    printf("Thank you for your purchase!\n");


    //im goated





}
