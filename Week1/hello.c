#include <stdio.h>

int main(void)
{
    char user_name[50];
    printf("What is your name? ");
    scanf("%s", user_name);
    printf("Hello %s\n",user_name);
    char color[20];
    printf("what is your favorite color? ");
    scanf("%s",color);
    printf("%s is a stupid color\n",color);
    
}


