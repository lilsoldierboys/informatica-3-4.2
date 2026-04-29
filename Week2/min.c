#include <stdio.h>
int main(void){
    int mov_run_t;
    int start_t_h;
    int start_t_m;
    int end_t_h;
    int end_t_m;
    printf("How long is the movie in minutes? \n");
    scanf("%d",&mov_run_t);
    printf("What is the starting time? \n");
    scanf("%d""%d",&start_t_h,&start_t_m);
    int min_t = mov_run_t/60;

    printf("The movie is %d hours and long\n", min_t);

    end_t_h = mov_run_t;
    end_t_m = mov_run_t%60;



    printf("%d",end_t_h);
    //printf("The movie will end at %d:%d \n",end_t_h,end_t_m);











}
