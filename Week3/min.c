#include <stdio.h>
int main(void){
    int mov_run_t;
    int start_t_h;
    int start_t_m;
    int end_t_h;
    int end_t_m;
    int new_h_t;
    int new_m_t;


    printf("How long is the movie in minutes? \n");
    scanf("%d",&mov_run_t);
    printf("What is the starting time? \n");
    scanf("%d:%d", &start_t_h, &start_t_m);

    int hour_t = mov_run_t/60;
    int min_t_m = mov_run_t%60;

    printf("The movie is %d hours and %d minutes long\n", hour_t,min_t_m);







    new_h_t= start_t_h + hour_t;
    new_m_t= start_t_m + min_t_m;




    printf("%d\n",new_m_t);









    if (new_m_t >= 60) {
        new_h_t = new_h_t + (new_m_t / 60);
        new_m_t = new_m_t % 60;
        printf("yes\n");
    }else {
        printf("idk");
    }

    printf("The movie will end at %d:%02d \n", new_h_t, new_m_t);//02 2 digits and puts a zero if no data given











}
