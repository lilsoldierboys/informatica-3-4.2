#include <stdio.h>
int main(void){
    float F;
    float C;

    printf("°C = °");
    scanf("%f",&C);

    F = (C * 1.8) + 32;


    printf("°F = °%.0f\n",F);

    if(C<0){
        printf("❄️ Freezing weather\n");
    }
    else if(C<=10){
        printf("🥶 Very cold weather\n");
    }
    else if(C<=20){
        printf("🧥 Chilly weather\n");
    }
    else if(C<=30){
        printf("🖼️ Normal weather\n");
    }
    else if(C<=40){
        printf("☀️ Hot weather\n");
    }
    else{
        printf("🔥 Very hot weather\n");
    }












}
