#include <stdio.h>
int main(void){
    int a = 5;
    int b = 5;
    int c = 10; //first



    printf("%d == %d is %d \n", a, c, a == c);//campares the values and says if theyre the same or not
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a != c);// 





    int number;
    printf("Enter a number \n");
    scanf("%d", &number);

    if(number < 0){// checks if requirements are met
        printf("%d is a negative number\n", number);
    }else{ // if not met and you want an output
        printf("%d is positive", number);
    }









}
