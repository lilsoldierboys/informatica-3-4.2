#include <stdio.h>

void f_to_c(void);
void c_to_f(void);

int option;

int main(void){

    printf("°F to °C =1 °C to °F = 2\n");
    scanf("%d",&option);
    if(option == 2){
       c_to_f();

    }
    else if(option == 1){
        f_to_c();
    }else{
        printf("areyou stupid\n");

    }






}






void f_to_c(void){
    float cel;
    float fah;
    printf("°F= ");
    scanf("%f", &fah);
    cel = (fah-32)/1.8;
    printf("%f°F = %f°C \n", fah, cel);

    //-40.00°F = -40.00°C




}
void c_to_f(void){
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







