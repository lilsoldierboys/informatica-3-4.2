#include <stdio.h>
int main(void){
    float cel;
    float fah;
    printf("°F= ");
    scanf("%f", &fah);
    cel = (fah-32)/1.8;
    printf("%f°F = %f°C \n", fah, cel);

    //-40.00°F = -40.00°C




}
