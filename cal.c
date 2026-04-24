#include <stdio.h>
int main(void){
    int y;
    int x;
    printf("height =");
    scanf("%d",&x);
    printf("width =");
    scanf("%d",&y);

    int A = x*y;
    int P = 2*x+2*y;

    printf("Perimeter = %d\n",P);
    printf("Area = %d\n",A);



}

