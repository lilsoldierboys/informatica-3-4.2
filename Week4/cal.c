#include <stdio.h>

void add(void);
void sub(void);
void mult(void);
void div(void);


float num_1;
float num_2;
char sign;




int main(void){
    scanf("%f%c%f",&num_1,&sign,&num_2);
    printf("%.2f %c %.2f\n",num_1,sign,num_2);

    if (sign == '+' ){
        add();
    }else if(sign == '-'){
        sub();
    }else if(sign == '*'){
        mult();
    }else if(sign == '/'){
        div();
    }




}



void add(void){
    float ans = num_1 + num_2;
    printf("%.2f %c %.2f = %.2f\n",num_1,sign,num_2,ans);
}
void sub(void){
    float ans = num_1 - num_2;
    printf("%.2f %c %.2f = %.2f\n",num_1,sign,num_2,ans);
}
void mult(void){
    float ans = num_1 * num_2;
    printf("%.2f %c %.2f = %.2f\n",num_1,sign,num_2,ans);
}
void div(void){
    float ans = num_1 / num_2;
    printf("%.2f %c %.2f = %.2f\n",num_1,sign,num_2,ans);
}
