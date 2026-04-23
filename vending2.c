#include <stdio.h>


int main(){
    float soda_price = 2.01;
    int soda_quant = 20;
    char soda_code ='C';
    float candy_price = 0.75;
    int candy_quant = 15;
    char candy_code ='B';
    float chips_price = 1.50;
    int chips_quant = 20;
    char chips_code ='A';
    printf("Welcome to the Snack Shop! \n");
    printf("---------------------------\n");
    printf("Item\t\tPrice\tQuantity\tCode\n");
    printf("Chips\t\t%.2f\t%d\t\t%c\n",     chips_price, chips_quant, chips_code);
    printf("Candy\t\t%.2f\t%d\t\t%c\n",     candy_price, candy_quant, candy_code);
    printf("Soda\t\t%.2f\t%d\t\t%c\n",     soda_price, soda_quant, soda_code);


}
